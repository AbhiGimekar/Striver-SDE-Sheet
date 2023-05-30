#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int subarraysXor(vector<int> &arr, int x)
    {
        int n = arr.size();
        int cnt = 0;
        int x_or = 0;

        unordered_map<int, int> mp;

        for (auto i : arr)
        {
            x_or ^= i;
            if (x_or == x)
                cnt++;

            if (mp.find(x_or ^ x) != mp.end())
                cnt += mp[x_or ^ x];

            mp[x_or]++;
        }
        return cnt;
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