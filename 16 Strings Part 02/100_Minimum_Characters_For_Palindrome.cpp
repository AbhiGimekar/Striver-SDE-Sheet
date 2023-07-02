#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getLPS(string &s)
    {
        int n = s.size();
        vector<int> lps(n, 0);
        int len = 0, index = 1;

        while (index < n)
        {
            if (s[index] == s[len])
            {
                len += 1;
                lps[index] = len;
                index++;
            }
            else
            {
                if (len == 0)
                {
                    lps[index] = 0;
                    index++;
                }
                else
                {
                    len = lps[len - 1];
                }
            }
        }
        return lps;
    }

    int minCharsforPalindrome(string s)
    {

        int n = s.size();
        string r = "";
        for (int i = n - 1; i >= 0; i--)
            r += s[i];

        string temp = s + "$" + r;
        vector<int> lps = getLPS(temp);

        return n - lps[lps.size() - 1];
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