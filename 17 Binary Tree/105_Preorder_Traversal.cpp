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
    void RecursivePreorderTraversal(TreeNode *root, vector<int> &preorder)
    {
        if (!root)
            return;
        preorder.push_back(root->val);
        RecursivePreorderTraversal(root->left, preorder);
        RecursivePreorderTraversal(root->right, preorder);
    }

    vector<int> IterativePreorderTraversal(TreeNode *root)
    {

        vector<int> preorder;
        if (root == NULL)
            return preorder;

        stack<TreeNode *> st;
        st.push(root);

        while (!st.empty())
        {
            root = st.top();
            st.pop();
            preorder.push_back(root->val);

            if (root->right)
                st.push(root->right);
            if (root->left)
                st.push(root->left);
        }
        return preorder;
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