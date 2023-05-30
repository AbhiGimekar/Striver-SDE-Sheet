#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int lengthOfLongestSubstring(string s)
    {
        vector<int> mp(356, -1);
        int n = s.size();
        int i = 0, j = 0;
        int ans = 0;

        while (j < n)
        {
            if (mp[s[j]] != -1)
                i = max(i, mp[s[j]] + 1);
            mp[s[j]] = j;
            ans = max(ans, j - i + 1);
            j++;
        }

        return ans;
    }

    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int n = s.size();
        int i = 0, j = 0;

        int ans = 0;
        while (i < n)
        {
            if (j < n && mp.find(s[j]) == mp.end())
            {
                mp[s[j]]++;
                j++;
            }
            else
            {
                cout << i << " " << j << "\n";
                ans = max(ans, j - i);
                // mp[s[i]]--;
                mp.erase(s[i]);
                i++;
            }
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