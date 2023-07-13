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
    void dfs(TreeNode *root, string temp, vector<string> &ans)
    {

        if (!root)
            return;

        temp += to_string(root->val) + " ";

        if (!root->left && !root->right)
            ans.push_back(temp.substr(0, temp.size() - 1));
        if (root->left)
            dfs(root->left, temp, ans);
        if (root->right)
            dfs(root->right, temp, ans);

        return;
    }

    vector<string> allRootToLeaf(TreeNode *root)
    {
        // Write your code here.
        vector<string> ans;
        dfs(root, "", ans);
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
