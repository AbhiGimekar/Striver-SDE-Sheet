#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool isAnagram(string s, string t)
    {

        if (s.size() != t.size())
            return false;
        vector<int> cnt(26, 0);

        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }

        for (auto c : cnt)
        {
            if (c)
                return false;
        }
        return true;
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