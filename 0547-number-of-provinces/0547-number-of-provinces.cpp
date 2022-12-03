class Solution {
public:
    void dfs(int node, vector<vector<int>>& isConnected, vector<int>& vis){
        vis[node] = 1;
        for(int i = 0; i<isConnected.size(); i++){
            if(isConnected[node][i] == 1 and !vis[i]){
                dfs(i, isConnected, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces = 0, n = isConnected.size();
        vector<int> vis(n);
        for(int i = 0; i<n; i++){
            if(!vis[i]){
                dfs(i, isConnected, vis);
                provinces++;
            }
        }
        return provinces;
    }
};