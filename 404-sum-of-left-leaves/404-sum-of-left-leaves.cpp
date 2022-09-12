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
    int sum = 0;
    void traverse(TreeNode* root, int pos){
        if(root == NULL)    return;
        if(root->left == root->right and pos == 0){
            sum += root->val;
        }
        traverse(root->left, 0);
        traverse(root->right, 1);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        traverse(root, 1);
        return sum;
    }
};