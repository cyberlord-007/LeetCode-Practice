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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        rightView(root,0,v);
        return v;
    }
public:
    void rightView(TreeNode* root,int lev,vector<int> &v) {
        if(!root)
            return;
        if(v.size() == lev)
            v.push_back(root->val);
        rightView(root->right,lev+1,v);
        rightView(root->left,lev+1,v);
    }
};