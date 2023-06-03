#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int n = nums.size();
        int i = 0, cnt = 0, ans = 0;
        while (i < n)
        {
            if (nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            ans = max(ans, cnt);
            i++;
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