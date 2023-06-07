#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<vector<int>> ans;

public:
    void fun(vector<int> &nums, vector<int> &ds, vector<int> &mp)
    {
        if (ds.size() == nums.size())
        {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!mp[i])
            {
                ds.push_back(nums[i]);
                mp[i] = 1;

                fun(nums, ds, mp);

                mp[i] = 0;
                ds.pop_back();
            }
        }
    }

    void fun(int index, vector<int> &nums)
    {
        if (index == nums.size())
        {
            ans.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            fun(index + 1, nums);
            swap(nums[index], nums[i]);
        }
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