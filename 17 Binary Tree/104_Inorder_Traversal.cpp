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
    void RecursiveInorderTraversal(TreeNode *root, vector<int> &inorder)
    {
        if (!root)
            return;
        RecursiveInorderTraversal(root->left, inorder);
        inorder.push_back(root->val);
        RecursiveInorderTraversal(root->right, inorder);
    }

    vector<int> IterativeInorderTraversal(TreeNode *root)
    {

        stack<TreeNode *> st;
        TreeNode *node = root;
        vector<int> inorder;

        while (true)
        {
            if (node != NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if (st.empty())
                    break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        }
        return inorder;
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