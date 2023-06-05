#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> partition(string s)
    {

        vector<vector<string>> ans;
        vector<string> path;
        fun(0, s, path, ans);
        return ans;
    }

    void fun(int index, string s, vector<string> &path, vector<vector<string>> &ans)
    {
        if (index == s.size())
        {
            ans.push_back(path);
            return;
        }

        for (int i = index; i < s.size(); i++)
        {
            if (isPalindrome(s, index, i))
            {
                path.push_back(s.substr(index, i - index + 1));
                fun(i + 1, s, path, ans);
                path.pop_back();
            }
        }
    }

    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }

        return true;
    }

    void print()
    {
        cout << 'Hello, Abhay';
    }
};

int main()
{
    Solution s;
    s.print();
    return 0;
}