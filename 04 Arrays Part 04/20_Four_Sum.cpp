#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<int> hashset;
                for (int k = j + 1; k < n; k++)
                {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - sum;

                    if (hashset.find(fourth) != hashset.end())
                    {
                        vector<int> temp{nums[i], nums[j], nums[k], (int)fourth};
                        st.insert(temp);
                    }

                    hashset.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans(begin(st), end(st));
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