#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int maxSubArray(vector<int> &nums)
    {

        int maxi = INT_MIN;
        int sum = 0;

        for (auto it : nums)
        {
            sum += it;
            maxi = max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }

        return maxi;
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