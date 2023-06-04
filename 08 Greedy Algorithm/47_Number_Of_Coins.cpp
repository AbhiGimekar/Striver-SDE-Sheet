#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fun(int coins[], int M, int V)
    {

        if (V == 0)
            return 0;
        int res = INT_MAX;

        for (int i = 0; i < M; i++)
        {
            if (coins[i] <= V)
            {
                int cnt = fun(coins, M, V - coins[i]);
                if (cnt != INT_MAX && cnt + 1 < res)
                    res = cnt + 1;
            }
        }

        return res;
    }

    int minCoins(int coins[], int M, int V)
    {

        int dp[V + 1];
        dp[0] = 0;

        for (int i = 1; i <= V; i++)
            dp[i] = INT_MAX;

        for (int i = 1; i <= V; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (coins[j] <= i)
                {
                    int cnt = dp[i - coins[j]];
                    if (cnt != INT_MAX && cnt + 1 < dp[i])
                        dp[i] = cnt + 1;
                }
            }
        }

        return dp[V] == INT_MAX ? -1 : dp[V];
        // return fun(coins, M, V);
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