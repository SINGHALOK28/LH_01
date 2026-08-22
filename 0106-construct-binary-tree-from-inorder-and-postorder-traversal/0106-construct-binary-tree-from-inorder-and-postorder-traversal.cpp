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
int postindex ;
    TreeNode* construct(vector<int>& inorder, vector<int>& postorder,int left, int right){
        if(left>right) return nullptr;

        int rootvalue=postorder[postindex--];
        TreeNode* root = new TreeNode(rootvalue);
        int index=right;
        while(inorder[index]!=rootvalue)
                index--;
        
        root->right = construct(inorder,postorder,index+1, right);
        root->left=construct(inorder,postorder,left,index-1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postindex=postorder.size() - 1;
        return construct(inorder,postorder,0,postorder.size()-1);
    }
};