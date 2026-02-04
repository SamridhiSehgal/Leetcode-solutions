class Solution {
public:
void dfs(int i,int j ,vector<vector<char>>&grid)
{ int m=grid.size();
        int n=grid[0].size();
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    grid[i][j]='0';
    for(int k=0;k<4;k++)
    {
        int nr=i+row[k];
        int nc=j+col[k];
        if(safe(nr,nc,grid))
        {
            dfs(nr,nc,grid);
        }
    }

}
bool safe(int i,int j,vector<vector<char>>&grid)
{ int m=grid.size();
        int n=grid[0].size();
    return(i>=0&&i<m&&j>=0&&j<n&&grid[i][j]=='1');
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                { count++;
                    dfs(i,j,grid);
                   
                }
            }
        }
        return count;
        
    }
};