#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int LongestSubsetWithZeroSum(vector<int> arr)
    {

        // Write your code here
        int n = arr.size();
        vector<int> prefix(n);
        unordered_map<int, int> mp;

        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                ans = max(ans, i + 1);
            }
            else
            {
                if (mp.find(sum) != mp.end())
                {
                    ans = max(ans, i - mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
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