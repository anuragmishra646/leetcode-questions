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
    // int levels(TreeNode* root){
    //     if(root == NULL) return ;
    //     return 1+max(l)
    // }
    void preorder(TreeNode* root, int targetSum,vector<vector<int>>& ans,        vector<int> ass){
        if(root == NULL) return ;
        targetSum-= root->val;
        ass.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(targetSum==0) ans.push_back(ass);
        }
        preorder(root->left,targetSum, ans,ass);
        
        preorder(root->right,targetSum, ans,ass);
        ass.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> ass;

        preorder(root,targetSum,ans,ass);
        return ans;
    }
};