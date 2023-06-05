#include <bits/stdc++.h>
using namespace std;

class Solution
{   
    vector<vector<int>> ans;
public:
    void fun(int index, int target, vector<int> &candidates, vector<int> &ds)
    {

        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            if (i > index && candidates[i] == candidates[i - 1])
                continue;
            if (candidates[index] > target)
                break;
            ds.push_back(candidates[i]);
            fun(i + 1, target - candidates[i], candidates, ds);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {

        sort(begin(candidates), end(candidates));

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