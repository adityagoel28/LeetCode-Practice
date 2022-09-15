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
    unordered_map<int, int> m;
    void traverse(TreeNode* root){
        if(root == NULL)    return;
        m[root->val]++;
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> mode;
        int maxx = 0;
        traverse(root);
        for(auto x:m){
            if(x.second > maxx) maxx = x.second;
        }
        for(auto x:m){
            if(x.second == maxx)    mode.push_back(x.first);
        }
        return mode;
    }
};