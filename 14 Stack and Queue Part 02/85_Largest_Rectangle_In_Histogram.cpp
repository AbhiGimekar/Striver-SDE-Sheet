#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void print()
    {
        cout << 'Hello, Abhay';
    }

    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> leftSmall(n, 0), rightSmall(n, 0);

        stack<int> st; // index
        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if (st.empty())
                leftSmall[i] = 0;
            else
                leftSmall[i] = st.top() + 1;

            st.push(i);
        }

        while (!st.empty())
            st.pop();

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
                st.pop();

            if (st.empty())
                rightSmall[i] = n - 1;
            else
                rightSmall[i] = st.top() - 1;

            st.push(i);
        }

        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, heights[i] * (rightSmall[i] - leftSmall[i] + 1));
        }
        return ans;
    }
    // Optimised Approach
    int largestRectangleArea(vector<int> &heights)
    {
        int n = heights.size();
        stack<int> st;
        int ans = 0;

        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i]))
            {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                ans = max(ans, width * height);
            }
            st.push(i);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    s.print();
    return 0;
}