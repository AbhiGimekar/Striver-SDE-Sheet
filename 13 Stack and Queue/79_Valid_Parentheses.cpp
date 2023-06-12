#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        for (auto i : s)
        {
            cout << i << " ";
            if (i == '(' || i == '{' || i == '[')
            {
                st.push(i);
            }
            else
            {
                if (st.empty())
                    return false;
                if ((st.top() == '(' && i != ')') || (st.top() == '{' && i != '}') ||
                    (st.top() == '[' && i != ']'))
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
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