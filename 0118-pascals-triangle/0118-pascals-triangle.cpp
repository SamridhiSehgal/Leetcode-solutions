class Solution {
public:
vector<int> rows(int i)
{long long ans=1;

    vector<int>ro;
ro.push_back(1);
for(int col=1;col<=i;col++)
{
    ans=ans*(i-col+1);
    ans=ans/col;
    ro.push_back(ans);
}
return ro;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>tri;
        for(int i=0;i<numRows;i++)
        {
            tri.push_back(rows(i));
        }
        return tri;
    }
};