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
    cout << data << endl;
    deserialize(data);

    return 0;
}
string serialize(TreeNode *root)
{
    if (!root)
        return "";

    queue<TreeNode *> q;
    q.push(root);
    string data;

    while (!q.empty())
    {
        TreeNode *n = q.front();
        q.pop();

        if (n)
        {
            data += to_string(n->val);
            data += ",";
            q.push(n->left);
            q.push(n->right);
        }
        else
        {
            data += "null,";
        }
    }

    data.erase(data.end() - 1);
    return data;
}

TreeNode *deserialize(string data)
{
    if (data.empty()) return nullptr;

    // split data
    vector<string> v;
    size_t pos = 0;
    string token;
    while ((pos = data.find(",")) != string::npos)
    {
        token = data.substr(0, pos);
        v.push_back(token);
        data.erase(0, pos + 1);
    }
    v.push_back(data);

    TreeNode *root = new TreeNode(stoi(v[0]));
    queue<TreeNode*> q;
    q.push(root);

    int i = 1;
    while (i < v.size())
    {
        TreeNode* n = q.front();
        q.pop();
        if (v[i] != "null") {
            TreeNode* left = new TreeNode(stoi(v[i]));
            n->left = left;
            q.push(left);
        }
        i++;

        if (v[i] != "null") {
            TreeNode* right = new TreeNode(stoi(v[i]));
            n->right = right;
            q.push(right);
        }
        i++;
    }

    return root;
}