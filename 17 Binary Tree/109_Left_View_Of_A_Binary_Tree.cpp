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
    void dfs(TreeNode *root, int level, vector<int> &ans)
    {
        if (!root)
            return;

        if (level == ans.size())
            ans.push_back(root->val);
        if (root->left)
            dfs(root->left, level + 1, ans);
        if (root->right)
            dfs(root->right, level + 1, ans);
    }

    vector<int> IterativeLeftView(TreeNode *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;

        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            bool first = true;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (first)
                {
                    ans.push_back(node->val);
                    first = false;
                }
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
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
