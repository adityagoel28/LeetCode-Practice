class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = prerequisites.size();
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses, 0);
        for(int i = 0; i<n; i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for(int i = 0; i<n; i++){
            indeg[prerequisites[i][1]]++;
        }
        queue<int> q;
        for(int i = 0; i < numCourses; i++) {
            if(indeg.at(i) == 0) q.push(i);
        }
        vector<int> topo;
        while(!q.empty()) {
            int u = q.front(); q.pop();
            topo.push_back(u);
            for(int v: adj[u]) {
                indeg[v]--;
                if(indeg[v] == 0) q.push(v);
            }
        }
        if(topo.size() != numCourses)    return false;
        return true;
    }
};