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
    int maxDepth(TreeNode* root) {
        if(root == NULL)  return {};
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *temp;
        while(!q.empty()){
            ans++;
            int len = q.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                // cout<<temp->val<<endl;
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};