#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> ans;
        ans.push_back({1});
        for (int i = 1; i < numRows; i++)
        {
            vector<int> temp(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                temp[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(temp);
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