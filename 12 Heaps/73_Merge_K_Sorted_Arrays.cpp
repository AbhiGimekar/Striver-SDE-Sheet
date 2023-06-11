#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> mergeKSortedArrays(vector<vector<int>> &nums, int k)
    {
        vector<int> ans;
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;

        for (int i = 0; i < nums.size(); i++)
        {
            pq.push({nums[i][0], {i, 0}});
        }

        while (!pq.empty())
        {
            auto top = pq.top();
            pq.pop();

            int i = top.second.first;
            int j = top.second.second;

            ans.push_back(top.first);

            if (j + 1 < nums[i].size())
            {
                pq.push({nums[i][j + 1], {i, j + 1}});
            }
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