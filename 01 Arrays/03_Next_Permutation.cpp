#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    void nextPermutation(vector<int> &nums)
    {

        int n = nums.size();
        int index = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
                index = i;
        }
        if (index == -1)
        {
            reverse(begin(nums), end(nums));
        }
        else
        {
            int left = -1;
            for (int i = index + 1; i < n; i++)
            {
                if (nums[i] > nums[index])
                {
                    left = i;
                }
            }
            swap(nums[left], nums[index]);
            reverse(begin(nums) + index + 1, end(nums));
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