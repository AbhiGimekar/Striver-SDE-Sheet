#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> Solution::prevSmaller(vector<int> &A)
    {
        stack<int> st;

        vector<int> nme(A.size(), 0);
        for (int i = 0; i < A.size(); i++)
        {
            while (!st.empty() && st.top() >= A[i])
                st.pop();

            if (st.empty())
                nme[i] = -1;
            else
                nme[i] = st.top();

            st.push(A[i]);
        }

        return nme;
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