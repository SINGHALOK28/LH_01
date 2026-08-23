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

bool solve(TreeNode* root, int target, unordered_map<int, int>& mp) {

      if(root == NULL)
          return false;

      // Check karo required complement pehle mila hai ya nahi
      int required = target - root->val;

      if(mp.find(required) != mp.end())
          return true;

      // Current element store karo
      mp[root->val]++;

      // Left ya right subtree mein search
      return solve(root->left, target, mp) ||
             solve(root->right, target, mp);
  }

    bool findTarget(TreeNode* root, int k) {
        unordered_map<int, int> mp;
        return solve(root, k, mp);
            }
};