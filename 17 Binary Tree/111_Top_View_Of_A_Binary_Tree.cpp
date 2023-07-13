#include <bits/stdc++.h>
using namespace std;

class Solution
{
    struct TreeNode
    {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

public:
    vector<int> topView(TreeNode *root)
    {
        vector<int> ans;
        if (!root)
            return ans;

        map<int, int> mp;           // {vertical -> node}
        queue<pair<TreeNode *, int>> q; // {node , vertocal}
        q.push({root, 0});

        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            TreeNode *node = it.first;
            int y = it.second;

            if (mp.find(y) == mp.end())
                mp[y] = node->val;

            if (node->left)
                q.push({node->left, y - 1});
            if (node->right)
                q.push({node->right, y + 1});
        }

        for (auto i : mp)
        {
            ans.push_back(i.second);
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
