#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    vector<int> twoSumHashing(vector<int> &nums, int target)
    {

        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                return {i, mp[target - nums[i]]};
            }
            mp[nums[i]] = i;
        }

        return {-1, -1};
    }

    vector<int> twoSumTwoPointer(vector<int> &nums, int target)
    {

        int n = nums.size();
        vector<int> copy = nums;
        sort(begin(nums), end(nums));
        int i = 0, j = n - 1;
        int first, second;
        while (i < j)
        {
            if (nums[i] + nums[j] == target)
            {
                first = nums[i], second = nums[j];
                break;
            }
            else if (nums[i] + nums[j] > target)
                j--;
            else
                i++;
        }

        int one = -1, two = -1;
        for (int i = 0; i < n; i++)
        {
            if (copy[i] == first && one == -1)
                one = i;
            else if (copy[i] == second)
                two = i;
        }

        return {one, two};
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