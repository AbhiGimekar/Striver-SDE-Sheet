#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        int left = 0, right = s.size() - 1;

        string temp = "";
        string ans = "";

        while (left <= right)
        {
            if (left > 0 && s[left] == ' ' && s[left] == s[left - 1])
            {
                left++;
                continue;
            }
            char ch = s[left];
            if (ch != ' ')
            {
                temp += ch;
            }
            else if (ch == ' ')
            {
                if (ans != "")
                    ans = temp + " " + ans;
                else
                    ans = temp;
                temp = "";
            }
            left++;
        }

        if (temp != "")
        {
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
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