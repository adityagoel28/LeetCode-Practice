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
    vector<int> num;
    vector<vector<int>> nums;
    void binaryTree(TreeNode* root){
        if(root == NULL)    return;
        num.push_back(root->val);
        if(root->left == NULL && root->right == NULL){
            nums.push_back(num);
            return;
        }
        if(root->left){
            binaryTree(root->left);
            num.pop_back();
        }
        // num.pop_back();
        if(root->right){
            binaryTree(root->right);
            num.pop_back();
        }
        // num.pop_back();
    }
    int sumNumbers(TreeNode* root) {
        binaryTree(root);
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            int power = 0, summ = 0;
            for(int j = nums[i].size()-1; j>=0; j--){
                summ += nums[i][j] * pow(10, power);
                power++;
            }
            ans += summ;
        }
        return ans;
    }
};