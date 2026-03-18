class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        // sort based on distance from origin
        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b){
            int d1 = a[0]*a[0] + a[1]*a[1];
            int d2 = b[0]*b[0] + b[1]*b[1];
            return d1 < d2;
        });

        // take first k points
        vector<vector<int>> result;
        for(int i = 0; i < k; i++){
            result.push_back(points[i]);
        }

        return result;
    }
};