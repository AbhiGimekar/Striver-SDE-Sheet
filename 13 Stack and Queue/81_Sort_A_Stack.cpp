#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void insert(stack<int> &st, int temp)
    {
        if (st.empty() || st.top() <= temp)
            st.push(temp);
        else
        {
            int val = st.top();
            st.pop();

            insert(st, temp);

            st.push(val);
        }
    }

    void sortStack(stack<int> &st)
    {
        if (st.size() == 1)
            return;
        int temp = st.top();
        st.pop();

        sortStack(st);

        insert(st, temp);
        return;
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