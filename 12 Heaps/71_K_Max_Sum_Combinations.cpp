#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
    {
        sort(begin(a), end(a));
        sort(begin(b), end(b));
        priority_queue<pair<int, pair<int, int>>> pq;
        set<pair<int, int>> st;

        pq.push({a[n - 1] + b[n - 1], {n - 1, n - 1}});
        st.insert({n - 1, n - 1});

        vector<int> ans;
        while (k--)
        {
            auto top = pq.top();
            pq.pop();
            ans.push_back(top.first);

            int i = top.second.first;
            int j = top.second.second;

            if (i > 0 && j > 0 && st.find({i - 1, j}) == st.end())
            {
                pq.push({a[i - 1] + b[j], {i - 1, j}});
                st.insert({i - 1, j});
            }

            if (i > 0 && j > 0 && st.find({i, j - 1}) == st.end())
            {
                pq.push({a[i] + b[j - 1], {i, j - 1}});
                st.insert({i, j - 1});
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