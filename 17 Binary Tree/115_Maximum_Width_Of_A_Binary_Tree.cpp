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
    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
            return 0;
        int ans = 0;

        queue<pair<TreeNode *, int>> q; //{Node, index}
        q.push({root, 0});

        while (!q.empty())
        {
            int size = q.size();
            int mini = q.front().second;
            int first, last;

            for (int i = 0; i < size; i++)
            {
                int cur_id = q.front().second - mini;
                TreeNode *node = q.front().first;
                q.pop();

                if (i == 0)
                    first = cur_id;
                if (i == size - 1)
                    last = cur_id;
                if (node->left)
                    q.push({node->left, 2LL * cur_id + 1});
                if (node->right)
                    q.push({node->right, 2LL * cur_id + 2});
            }
            ans = max(ans, last - first + 1);
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
