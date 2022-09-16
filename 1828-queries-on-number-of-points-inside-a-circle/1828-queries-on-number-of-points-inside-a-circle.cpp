class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        int n = points.size(), qn = queries.size();
        for(int i = 0; i<qn; i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                int x1=queries[i][0], x2=points[j][0], y1 = queries[i][1], y2 = points[j][1];
                double dist = sqrt(pow((x1-x2),2) + pow((y2-y1),2));
                if(dist <= queries[i][2])   count++;
            }
            answer.push_back(count);
        }
        return answer;
    }
};