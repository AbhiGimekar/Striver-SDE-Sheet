#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int findDuplicate(vector<int> &nums)
    {

        if (nums.size() > 1)
        {
            int slow = nums[0];
            int fast = nums[nums[0]];

            while (slow != fast)
            {
                slow = nums[slow];
                fast = nums[nums[fast]];
            }

            fast = 0;

            while (fast != slow)
            {
                fast = nums[fast];
                slow = nums[slow];
            }

            return slow;
        }

        return 1;
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