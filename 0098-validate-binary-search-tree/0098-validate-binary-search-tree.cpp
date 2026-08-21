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
TreeNode* prev=nullptr;
bool ans = true;
void inorder(TreeNode* root){
    if(root == nullptr) return;

    inorder(root->left);
   // res.push_back(root->val);
   if(prev == nullptr){
    prev=root;
   }
   else{
        if(root->val <= prev->val)
            ans=false;
            prev=root;
   }
    inorder(root->right);

    return;
}
    bool isValidBST(TreeNode* root) {
        inorder(root);
    //    for(int i=0;i<res.size()-2;i++){
    //         if(res[i+1]<res[i]) 
    //         { ans=false; }
    //     }
        return ans;
    }
};