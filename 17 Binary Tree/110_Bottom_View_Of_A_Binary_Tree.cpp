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
    vector <int> bottomView(TreeNode *root) {
        vector<int> ans;
        if(!root)return ans;
        
        map<int, int> nodes; // {vertical, node}
        queue<pair<TreeNode*, int>> q; // {Node, vertical}
        q.push({root, 0});
        
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int y = q.front().second;
            q.pop();
            
            nodes[y] = node->val;
            
            if(node->left)q.push({node->left,y-1});
            if(node->right)q.push({node->right, y+1});
        }
        
        for(auto i : nodes){
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
