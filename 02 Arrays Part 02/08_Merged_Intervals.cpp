#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {

        int n = intervals.size();
        sort(begin(intervals), end(intervals));

        vector<vector<int>> merged;
        for (auto interval : intervals)
        {
            if (merged.empty() || merged.back()[1] < interval[0])
            {
                merged.push_back(interval);
            }
            else
            {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
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