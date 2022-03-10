public:
    bool f=false;
    
public:
    bool hasPathSum(TreeNode* root, int targetSum, int sum=0) {
        if(root==NULL)
            return false;
        if((sum+root->val==targetSum) && root->left==NULL && root->right==NULL)
        {
            f=true;
            return true;
        }
        hasPathSum(root->left, targetSum, sum+root->val);
        hasPathSum(root->right, targetSum, sum+root->val);
        
        return f;
    }