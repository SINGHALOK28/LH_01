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
    bool solve(TreeNode* root1, TreeNode* root2){
        if(root1 ==nullptr && root2==nullptr)
            return true;
        if(root1 ==nullptr || root2==nullptr)
            return false;
        if(root1->val != root2->val)
            return false;

        bool r1=solve(root1->left,root2->left);
        bool r2=solve(root1->right,root2->right);

        return r1&&r2;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool res =solve(p,q);
        return res;
    }
};