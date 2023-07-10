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
    void RecursivePostorderTraversal(TreeNode *root, vector<int> &postorder)
    {
        if (!root)
            return;
        RecursivePostorderTraversal(root->left, postorder);
        RecursivePostorderTraversal(root->right, postorder);
        postorder.push_back(root->val);
    }

    vector<int> IterativePostorderTraversal(TreeNode *root)
    {
        vector<int> postorder;
        if (root == NULL)
            return postorder;

        stack<TreeNode *> st1, st2;
        st1.push(root);

        while (!st1.empty())
        {
            root = st1.top();
            st1.pop();
            st2.push(root);

            if (root->left)
                st1.push(root->left);
            if (root->right)
                st1.push(root->right);
        }

        while (!st2.empty())
        {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
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
