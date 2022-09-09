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
    vector<string> ans;
    string s = "";
    void binaryPath(TreeNode* root, string s){
        s += to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            ans.push_back(s);
            return;
        }
        if(root->left)  binaryPath(root->left, s + "->");
        if(root->right)  binaryPath(root->right, s + "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        binaryPath(root, s);
        return ans;
    }
};