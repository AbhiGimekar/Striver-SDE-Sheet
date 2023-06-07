#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> wordBreakHelper(string &s, int idx, unordered_set<string> &st, unordered_map<int, vector<string>> &dp, int size)
    {
        if (idx == size)
            return {""};

        if (dp.find(idx) != dp.end())
            return dp[idx];

        vector<string> subPart, completePart;
        string word = "";

        for (int j = idx; j < size; j++)
        {
            word.push_back(s[j]);
            if (st.count(word) == 0)
                continue;

            // Get the answer for rest of sentence from 'j' to s.size().
            subPart = wordBreakHelper(s, j + 1, st, dp, size);

            // Append "word" with all the answer that we got.
            for (int i = 0; i < subPart.size(); i++)
            {
                if (subPart[i].size() != 0)
                {
                    string temp = word;
                    temp.append(" ");
                    temp.append(subPart[i]);
                    subPart[i] = temp;
                }
                else
                {
                    subPart[i] = word;
                }
            }

            for (int i = 0; i < subPart.size(); i++)
            {
                completePart.push_back(subPart[i]);
            }
        }

        // Store all the answer for the current index in the map
        dp[idx] = completePart;

        return dp[idx];
    }

    vector<string> wordBreak(string &s, vector<string> &dict)
    {
        unordered_map<int, vector<string>> dp;
        unordered_set<string> st(begin(dict), end(dict));
        return wordBreakHelper(s, 0, st, dp, s.size());
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