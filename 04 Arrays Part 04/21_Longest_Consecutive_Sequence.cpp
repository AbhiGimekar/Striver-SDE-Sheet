#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int longestConsecutive(vector<int> &nums)
    {

        int n = nums.size();
        if (n <= 1)
            return n;
        set<int> hashSet;
        for (auto i : nums)
            hashSet.insert(i);

        int longestStreak = -1;
        for (auto num : nums)
        {
            if (!hashSet.count(num - 1))
            {
                int currentNum = num;
                int currentStreak = 1;

                while (hashSet.count(currentNum + 1))
                {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
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