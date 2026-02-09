class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                else
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        int time=0;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()&&fresh>0){
            int sz=q.size();
            time++;
            while(sz--)
            {auto[x,y]=q.front();
            q.pop();
                for(int d=0;d<4;d++)
                {
                    int nx=x+dx[d];
                    int ny=y+dy[d];
                if(nx>=0&&ny>=0&&nx<n&&ny<m&&grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    fresh--;
                    q.push({nx,ny});
                }
                }
            }

        }
        if(fresh==0)
        {
            return time;
        }else
        return -1;
        
    }
};