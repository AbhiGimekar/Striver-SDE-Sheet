#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getLPS(string &s)
    {
        int m = s.size();
        vector<int> lps(m, 0);
        int index = 1, len = 0;

        while (index < m)
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
    int strStr(string haystack, string needle)
    {
        int n = haystack.size(), m = needle.size();
        vector<int> lps = getLPS(needle);
        int index1 = 0, index2 = 0;

        while (index1 < n)
        {
            if (haystack[index1] == needle[index2])
            {
                index1++;
                index2++;
                if (index2 == m)
                    return index1 - index2;
                if (index1 == n)
                    return -1;
            }
            else
            {
                if (index2 == 0)
                    index1++;
                else
                    index2 = lps[index2 - 1];
            }
        }
        return -1;
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