void helper(vector<string> &vec, string input, string sofar)
{
    if (input.empty()) vec.push_back(sofar);
    else {
        char c = input[0];
        if (isalpha(c)) {
            helper(vec, input.substr(1), sofar + (char)tolower(input[0]));
            helper(vec, input.substr(1), sofar + (char)toupper(input[0]));
        } else {
            helper(vec, input.substr(1), sofar + input[0]);
        }
    }
}


vector<string> permutation(string s)
{
    vector<string> vec;
    helper(vec, S, "");
    return vec;
}