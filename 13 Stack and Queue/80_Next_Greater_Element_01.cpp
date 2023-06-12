#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        int n = nums2.size();
        vector<int> nge(n, -1);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top() < nums2[i])
                st.pop();

            if (st.empty())
                nge[i] = -1;
            else
                nge[i] = st.top();

            st.push(nums2[i]);
        }

        // for(auto i:nge)cout<<i<<" ";
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums2[i]] = nge[i];
        }

        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            ans.push_back(mp[nums1[i]]);
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