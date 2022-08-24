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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL)  return {};
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode *temp;
        while(!q.empty()){
            int len = q.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            double sum = 0;
            for(int i = 0; i<v.size(); i++){
                sum += v[i];
            }
		    ans.push_back(sum/len);
        }
        return ans;
    }
};