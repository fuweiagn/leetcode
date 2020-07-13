#include "leetcode.hpp"

TreeNode *deserialize(string data);
string serialize(TreeNode *root);
int main()
{
    TreeNode* root = new TreeNode(1);
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(4);
    TreeNode* d = new TreeNode(5);
    root->left = a;
    root->right = b;
    b->left = c;
    b->right = d;
    string data = serialize(root);
    deserialize(data);

    return 0;
}
string serialize(TreeNode *root)
{
    if (!root)
        return "";

    queue<TreeNode *> q;
    q.push(root);
    ostringstream oss;

    while (!q.empty())
    {
        TreeNode *n = q.front();
        q.pop();

        if (n)
        {
            oss << n->val << " ";
            q.push(n->left);
            q.push(n->right);
        }
        else
        {
            oss << "null ";
        }
    }

    return oss.str();
}

TreeNode *deserialize(string data)
{
    if (data.empty()) return nullptr;

    // split data
    vector<TreeNode*> v;
    istringstream s(data);
    string token;
    while (s >> token) {
        if (token == "null") v.push_back(nullptr);
        else {
            v.push_back(new TreeNode(stoi(token)));
        }
    }

    TreeNode *root = v[0];
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (i < v.size())
    {
        TreeNode* n = q.front();
        q.pop();
        if (v[i]) {
            TreeNode* left = v[i];
            n->left = left;
            q.push(left);
        }
        i++;

        if (v[i]) {
            TreeNode* right = v[i];
            n->right = right;
            q.push(right);
        }
        i++;
    }

    return root;
}