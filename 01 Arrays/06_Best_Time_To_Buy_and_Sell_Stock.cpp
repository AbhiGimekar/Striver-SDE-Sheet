#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int mini = prices[0];
        int profit = 0;

        for (int i = 1; i < n; i++)
        {
            int cost = prices[i] - mini;
            profit = max(profit, cost);
            mini = min(mini, prices[i]);
        }

        return profit;
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
