#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        int mini = INT_MAX;
        for (auto i : strs)
        {
            mini = min(mini, int(i.size()));
        }

        string ans = "";
        for (int i = 0; i < mini; i++)
        {
            bool flag = true;
            for (int j = 0; j < strs.size() - 1; j++)
            {
                if (strs[j][i] != strs[j + 1][i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                ans += strs[0][i];
            else
                break;
        }

        return ans;
    }

    string longestCommonPrefix(vector<string> &strs)
    {

        sort(begin(strs), end(strs));
        int n = strs.size();

        string s1 = strs[0];
        string s2 = strs[n - 1];

        string ans = "";
        int i = 0;
        while (i < s1.size() && i < s2.size())
        {
            if (s1[i] == s2[i])
                ans += s1[i];
            else
                break;
            i++;
        }
        return ans;
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