#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    void sortColors(vector<int> &nums)
    {

        int n = nums.size();
        int zero = 0, one = 0, two = 0;
        for (auto &i : nums)
        {
            if (i == 0)
                zero++;
            else if (i == 1)
                one++;
            else
                two++;
        }

        for (int i = 0; i < n; i++)
        {
            if (zero > 0)
            {
                nums[i] = 0;
                zero--;
            }
            else if (one > 0)
            {
                nums[i] = 1;
                one--;
            }
            else
            {
                nums[i] = 2;
                two--;
            }
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