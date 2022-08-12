void fun(int i, int n, string &sub, vector<string> &res, string &s)
{
    if(i==n)
    {
        res.push_back(sub);
        return;
    }
    sub.push_back(s[i]);
    fun(i+1, n, sub, res, s);
    sub.pop_back();
    fun(i+1, n, sub, res, s);
}
vector <string> powerSet(string s)
{
    int n = s.size();
    vector<string> res;
    string sub;
    fun(0, n, sub, res, s);
    return res;
}

// Driver Code
