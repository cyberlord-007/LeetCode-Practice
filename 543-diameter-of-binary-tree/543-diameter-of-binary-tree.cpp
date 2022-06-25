/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        vector<int>v;
        cal(root,v);
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
public:
    int cal(TreeNode* root,vector<int> &v) {
        if(!root)
            return 0;
        int lh = cal(root->left,v);
        int rh = cal(root->right,v);
        
        v.push_back(lh+rh);
        
        return max(lh,rh) + 1;
    }
};