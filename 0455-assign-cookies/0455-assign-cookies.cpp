class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gn=g.size();
        int sn=s.size();
        long long count=0;
        int j=0;int i=0;
        while(i<gn&&j!=sn){
            if(g[i]<=s[j]){
                count=count+1;
                i++;
            }j++;
        }
        return count;
    }
};