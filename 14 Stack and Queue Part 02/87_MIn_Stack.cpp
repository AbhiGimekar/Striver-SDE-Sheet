#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    class MinStack
    {
        stack<long long> st;
        long long mini;

    public:
        MinStack()
        {
            mini = INT_MAX;
        }

        void push(int value)
        {
            long long val = value;
            if (st.empty())
            {
                mini = val;
                st.push(val);
            }
            else
            {
                if (val < mini)
                {
                    st.push(2 * val * 1LL - mini);
                    mini = val;
                }
                else
                {
                    st.push(val);
                }
            }
        }

        void pop()
        {
            if (st.empty())
                return;
            long long ele = st.top();
            st.pop();

            if (ele < mini)
                mini = 2 * mini * 1LL - ele;
        }

        int top()
        {
            if (st.empty())
                return -1;
            long long ele = st.top();
            if (ele < mini)
                return mini;
            return ele;
        }

        int getMin()
        {
            return mini;
        }
    };

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