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
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL)  return {};
        int ans = 0, depth = 0, value;
        queue<TreeNode*> q, qu;
        q.push(root);
        qu.push(root);
        TreeNode *temp, *temp1;
        while(!q.empty()){
            ans++;
            int len = q.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        while(!qu.empty()){
            depth++;
            int len = qu.size();
            vector<int> v;
            for(int i = 0; i < len; i++){
                if(ans == depth){
                    value = qu.front()->val;
                    break;
                }
                temp1 = qu.front();
                qu.pop();
                v.push_back(temp1->val);
                if(temp1->left) qu.push(temp1->left);
                if(temp1->right) qu.push(temp1->right);
            }
        }
        return value;
    }
};