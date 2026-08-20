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

vector<vector<int>> res;

void solve(TreeNode* root, int sum,  vector<int>& diary,int target){
    if(root==NULL) return;
    sum+=root->val;

    diary.push_back(root->val);

     if(root->left == NULL && root->right==NULL){
            if(target == sum)
            res.push_back(diary);
            diary.pop_back(); 
            return;
        }
        solve(root->left,sum,diary,target);
        solve(root->right,sum,diary,target);
        diary.pop_back();
    return;
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>diary;
        solve(root,0,diary,targetSum);
        return res;
    }
};