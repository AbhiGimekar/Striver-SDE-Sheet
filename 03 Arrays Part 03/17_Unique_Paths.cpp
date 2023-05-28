#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int recursive(int i, int j, int m, int n)
    {
        if (i == (m) && j == n)
            return 1;
        if (i > m || j > n)
            return 0;

        return recursive(i + 1, j, m, n) + recursive(i, j + 1, m, n);
    }

    int DynamicProgramming(int i, int j, int m, int n, vector<vector<int>> &dp)
    {   
        if(i == (m) && j == n)return 1;
        if(i>m || j>n)return 0;

        if(dp[i][j] != -1)return dp[i][j];

        return dp[i][j] = DynamicProgramming(i+1, j, m, n, dp) + DynamicProgramming(i, j+1, m, n, dp);
    }

    int combinatorics(int m, int n)
    {   
        int N = m + n - 2;
        int r = min(m-1, n-1);
        double ans = 1;

        for(int i=1; i<=r; i++) 
            ans = ans * (N - r + i)/i;

        return (int)ans;
    }

    int uniquePaths(int m, int n)
    {   
        // vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
        // return DynamicProgramming(0, 0, m-1, n-1);

        // return combinatorics(m, n);
        return recursive(0, 0, m - 1, n - 1);
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