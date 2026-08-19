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

int diameter =0; 
int maxDepth(TreeNode* root) {
        //Tree empty hai
        if (root == NULL)
            return 0;

        //Left aur Right subtree ki depth nikalo
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        //Diameter ka calculation
        diameter = max(diameter,left+right);

        //Current node ki wajah se +1
        return 1 +max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return diameter;
        
    }
};