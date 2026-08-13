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

    void dfs(TreeNode* root,int level,vector<int>& result){
        if(root==NULL) return;

        if(result.size()<level){
            result.push_back(root->val);
        }
        dfs(root->right,level+1,result);
        dfs(root->left,level+1,result);

    }
    vector<int> rightSideView(TreeNode* root) {

        vector<int>result;
        dfs(root,1,result);
        return result;



        // if(root==NULL) return {};
        // queue<TreeNode*> q; 
        // q.push(root);

        // vector<int> result;

        // while(!q.empty()){
        //     int levelSize=q.size();
        //     TreeNode* temp;

        //     while(levelSize--){
        //         temp=q.front();
        //         q.pop();

        //         if(temp->left!=NULL){
        //             q.push(temp->left);
        //         }
        //         if(temp->right!=NULL){
        //             q.push(temp->right);
        //         }
        //     }
        //  result.push_back(temp->val);
        // }
        // return result;
    }
};