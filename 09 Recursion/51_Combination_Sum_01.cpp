#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    vector<vector<int>> ans;
public:
    void fun(int index, int target, vector<int> &candidates, vector<int> &ds)
    {
        if (index == candidates.size())
        {
            if (target == 0)
                ans.push_back(ds);
            return;
        }

        if (target >= candidates[index])
        {
            ds.push_back(candidates[index]);
            fun(index, target - candidates[index], candidates, ds);
            ds.pop_back();
        }

        fun(index + 1, target, candidates, ds);
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {

        vector<int> ds;
        fun(0, target, candidates, ds);
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