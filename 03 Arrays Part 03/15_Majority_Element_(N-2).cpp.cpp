#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0, ans = -1;

        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
                ans = nums[i];

            if (nums[i] == ans)
                cnt++;
            else
                cnt--;
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