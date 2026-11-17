class Solution {
public:
    int sum =0;
    void maxsum(TreeNode* root){
        if(root==NULL) return ;
        maxsum(root->right);
        sum+=root->val;
        root->val = sum;
        maxsum(root->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        maxsum(root);
        
        return root;
    }
};