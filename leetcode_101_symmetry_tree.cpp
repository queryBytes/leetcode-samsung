public:
    bool mirror(TreeNode *p, TreeNode* q)
    {
        if(p==NULL && q==NULL)
            return true;
        if((p==NULL && q!=NULL) || (q==NULL && p!=NULL))
            return false;
        return p->val==q->val && mirror(q->left,p->right) && mirror(q->right, p->left);
    }

public:
    bool isSymmetric(TreeNode* root) {
        return mirror(root->left, root->right);
    }