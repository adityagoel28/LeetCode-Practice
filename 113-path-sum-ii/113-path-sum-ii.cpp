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
    vector<vector<int>> ans;
    void pathSum2(TreeNode* root, vector<int>& path, int target) {
        if(root == NULL)    return;
        path.push_back(root->val);
        if(root->val == target && root->left == NULL && root->right == NULL){
            ans.push_back(path);
        }
        else{
            pathSum2(root->left, path, target - root->val);
            pathSum2(root->right, path, target - root->val);
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> paths;
        pathSum2(root, paths, targetSum);
        return ans;
    }
};