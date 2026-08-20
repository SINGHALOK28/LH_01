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
vector<vector<int>> result;

void solve(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    if (root == NULL)
            return;
    while(!q.empty()){
        int levelsize=q.size();
        vector<int>temp;

        while(levelsize--){
            TreeNode* t=q.front();
            q.pop();
            temp.push_back(t->val);

             if(t->left != NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
        }
        result.push_back(temp);
    }
    return;

}
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        solve(root);
        reverse(result.begin(),result.end());
        return result;
    }
};