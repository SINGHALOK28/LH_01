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
    bool ans=false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false; // base case

        if(root->left == NULL && root->right==NULL){
                if(targetSum == root->val) 
                ans=true;
            return ans ;
        }
            hasPathSum(root->left,targetSum-root->val);
            hasPathSum(root->right,targetSum-root->val);
        return ans;
    }
};