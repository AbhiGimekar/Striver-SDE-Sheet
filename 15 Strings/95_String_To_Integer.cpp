#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {

        int n = s.size();

        if (n == 0)
            return 0;

        int index = 0;
        // Skipping whitespaces
        while (index < n && s[index] == ' ')
            ++index;

        bool isNeg = false;
        if (index < n)
        {
            if (s[index] == '-')
            {
                isNeg = true;
                ++index;
            }
            else if (s[index] == '+')
            {
                ++index;
            }
        }

        int ans = 0;
        while (index < n && isdigit(s[index]))
        {
            int digit = s[index] - '0';
            if (ans > (INT_MAX / 10) || (ans == (INT_MAX / 10) && digit > 7))
                return isNeg ? INT_MIN : INT_MAX;

            ans = (ans * 10) + digit;
            ++index;
        }

        return isNeg ? -1 * ans : ans;
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