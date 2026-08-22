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
    int preindex = 0;

    TreeNode* construct(vector<int>& preorder, vector<int>& inorder,int left, int right){
        if(left>right) return nullptr;

        int rootvalue=preorder[preindex++];
        TreeNode* root = new TreeNode(rootvalue);
        int index=left;
        while(inorder[index]!=rootvalue)
                index++;
        root->left=construct(preorder,inorder,left,index-1);
        root->right = construct(preorder,inorder,index+1, right);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      return construct(preorder,inorder,0,preorder.size()-1);
    }
};