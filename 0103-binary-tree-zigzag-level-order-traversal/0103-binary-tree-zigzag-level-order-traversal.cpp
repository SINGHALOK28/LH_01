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

    //changes for variations
    bool left2right=1;
    
    if (root == NULL)
            return;
    while(!q.empty()){
        int levelsize=q.size();
    //    vector<int>temp;
    vector<int> temp(levelsize);  // you to initaialze the vector size here
    //changes for variations
    int first=0;
    int last=levelsize-1;

        while(levelsize--){
            TreeNode* t=q.front();
            q.pop();

    //changes for variations
            //temp.push_back(t->val); it will get commented 
            if(left2right==1){
                temp[first]=t->val;
                first++;
            }
            else{
                temp[last]=t->val;
                last--;
            }

             if(t->left != NULL)
                q.push(t->left);
            if(t->right!=NULL)
                q.push(t->right);
        }
        result.push_back(temp);
        left2right=1-left2right;
            }
    return;

}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        solve(root);
        return result;  
    }
};