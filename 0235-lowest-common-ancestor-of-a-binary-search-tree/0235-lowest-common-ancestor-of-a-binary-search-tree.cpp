/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    //TreeNode* ans = NULL;
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        
        //Tree empty hai
        if(root==NULL)
            return NULL;

        // Dono values current node se chhoti hain
        // Isliye LCA left subtree mein hoga
        if(p->val < root->val && q->val < root->val)
            return solve(root->left, p, q);

        // Dono values current node se badi hain
        // Isliye LCA right subtree mein hoga
        if(p->val > root->val && q->val > root->val)
            return solve(root->right, p, q);

        // Ek left mein aur ek right mein hai
        // Ya current node hi (p ya q) hai
        // Isliye current node LCA hai
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(p->val<=q->val)
            return solve(root,p,q);
        else
            return solve(root,q,p);
    }
};