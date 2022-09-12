/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL)  return {};
        int depth = 0;
        queue<Node*> q;
        q.push(root);
        Node* temp;
        while(!q.empty()){
            depth++;
            int len = q.size();
            for(int i = 0; i < len; i++){
                temp = q.front();
                q.pop();
                for(auto child: temp->children) if(child) q.push(child);
                // if(temp->children) q.push(temp->children);
            }
        }
        return depth;
    }
};