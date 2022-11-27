class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin(), asteroids.end());
        long currMass = mass;
        for(int i = 0; i<n; i++){
            if(asteroids[i] > currMass) return false;
            else    currMass += asteroids[i];
        }
        return true;
    }
};