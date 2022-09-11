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
    int summ = 0;
    void inorderTraversal(TreeNode* root, int low, int high){
        if(root == NULL)    return;
        if(root->val <= high and root->val >= low)  summ += root->val;
        inorderTraversal(root->left, low, high);
        inorderTraversal(root->right, low, high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        inorderTraversal(root, low, high);
        return summ;
    }
};