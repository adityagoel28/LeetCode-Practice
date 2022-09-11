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
    int good = 0;
    void treeTraversal(TreeNode* root, int maxx){
        if(root == NULL)    return;
        if(root->val >= maxx){
            good++;
            maxx = root->val;
        }
        treeTraversal(root->left, maxx);
        treeTraversal(root->right, maxx);
    }
    int goodNodes(TreeNode* root) {
        treeTraversal(root, root->val);
        return good;
    }
};