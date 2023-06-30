#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {

        int low, high;
        int start = 0, end = 1;
        int n = s.size();

        for (int i = 1; i < n; i++)
        {
            // Even substring
            low = i - 1;
            high = i;
            while (low >= 0 && high < n && s[low] == s[high])
            {
                if (high - low + 1 > end)
                {
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }

            // Odd Substring
            low = i - 1;
            high = i + 1;

            while (low >= 0 && high < n && s[low] == s[high])
            {
                if (high - low + 1 > end)
                {
                    start = low;
                    end = high - low + 1;
                }
                low--;
                high++;
            }
        }

        string ans = "";
        for (int i = start; i <= start + end - 1; i++)
            ans += s[i];

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