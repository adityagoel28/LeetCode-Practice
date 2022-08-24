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
    int maxLevelSum(TreeNode* root) {
        if(root == NULL)  return {};
        queue<TreeNode*> q;
        q.push(root);
        int maxx = INT_MIN, j = 0, level;
        TreeNode *temp;
        while(!q.empty()){
            j++;
            int len = q.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            int sum = 0;
            for(int i = 0; i<v.size(); i++){
                sum += v[i];
            }
            if(sum > maxx){
                maxx = sum;
                level = j;
            }
        }
        return level;
    }
};