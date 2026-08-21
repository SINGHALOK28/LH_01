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

TreeNode* galat1first =NULL;
TreeNode* galat1second =NULL;
TreeNode* galat2first =NULL;
TreeNode* galat2second =NULL;
TreeNode* prev =NULL;
int count =0;

void inorder(TreeNode* root){

    if(root == NULL)
        return;

    // Left
    inorder(root->left);

    // Current
    if(prev != NULL && prev->val > root->val){

        count++;

        // First violation
        if(count == 1){
            galat1first = prev;
            galat1second = root;
        }

        // Second violation
        else if(count == 2){
            galat2first = prev;
            galat2second = root;
        }
    }
    prev= root;

    // Right
    inorder(root->right);
}

void recoverTree(TreeNode* root) {
        inorder(root);

        //Adjacent nodes swapped
        if(count == 1){
            swap(galat1first->val, galat1second->val);
        }

        //Far apart nodes swapped
        else if(count == 2){
            swap(galat1first->val, galat2second->val);
        }
    }
};