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
bool flag=true;

void solve(TreeNode* root){

    queue<TreeNode*> q;  //Queue banayenge
        q.push(root);

    if(root == nullptr) return;

    while(!q.empty()){

       int levelsize = q.size();
       vector<int>temp;

       while(levelsize--){
            TreeNode* t = q.front();
                q.pop();
            // if()
            temp.push_back(t->val);

            if(t->left != NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
       }
       if(flag==true)
        result.push_back(temp);
       else if (flag==false)
        {
            reverse(temp.begin(),temp.end());
            result.push_back(temp);
        }
        flag = !flag;
    }
    return;
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        solve(root);
        return result;  
    }
};