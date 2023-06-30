#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextSmaller(vector<int> &nums, int n)
    {
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
                st.pop();

            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }

    vector<int> nextGreater(vector<int> &nums, int n)
    {
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && nums[st.top()] >= nums[i])
                st.pop();

            if (st.empty())
                ans[i] = n;
            else
                ans[i] = st.top();

            st.push(i);
        }
        return ans;
    }
    vector<int> maxMinWindow(vector<int> nums, int n)
    {

        vector<int> next = nextGreater(nums, n);
        vector<int> prev = nextSmaller(nums, n);

        vector<int> ans(n, INT_MIN);

        for (int i = 0; i < n; i++)
        {
            int length = next[i] - prev[i] - 1;
            ans[length - 1] = max(ans[length - 1], nums[i]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = max(ans[i], ans[i + 1]);
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