#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int quickSelect(vector<int> &nums, int k)
    {
        if (nums.size() == 0)
            return 0;
        int pivot = nums[rand() % nums.size()];
        vector<int> left, mid, right;

        for (int num : nums)
        {
            if (num > pivot)
                left.push_back(num);
            else if (num < pivot)
                right.push_back(num);
            else
                mid.push_back(num);
        }

        if (k <= left.size())
            return quickSelect(left, k);
        if (left.size() + mid.size() < k)
            return quickSelect(right, k - left.size() - mid.size());

        return pivot;
    }

    int findKthLargest(vector<int> &nums, int k)
    {

        return quickSelect(nums, k);
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