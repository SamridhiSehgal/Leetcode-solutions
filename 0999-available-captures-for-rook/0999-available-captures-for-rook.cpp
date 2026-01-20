class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
       int n=board.size();
       int m=board[0].size();
       int count=0;int id;int jd;int move=0;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(board[i][j]=='R')
            {
                id=i;
                jd=j;

            }}
        }
    for(int i=id-1;i>=0;i--)
    {
        if(board[i][jd]=='.')
        {
            move=move+1;
        }
        if(board[i][jd]=='B')
        {
            break;
        }
        if(board[i][jd]=='p')
        {
            count=count+1;
            break;
        }
    }
    for(int i=id+1;i<n;i++)
    {
        if(board[i][jd]=='.')
        {
            move=move+1;
        }
        if(board[i][jd]=='B')
        {
            break;
        }
        if(board[i][jd]=='p')
        {
            count=count+1;
            break;
        }
    }
    for(int j=jd+1;j<m;j++)
    {
        if(board[id][j]=='.')
        {
            move=move+1;
        }
        if(board[id][j]=='B')
        {
            break;
        }
        if(board[id][j]=='p')
        {
            count=count+1;
            break;
        }
    }
    for(int j=jd-1;j>=0;j--)
    {
        if(board[id][j]=='.')
        {
            move=move+1;
        }
        if(board[id][j]=='B')
        {
            break;
        }
        if(board[id][j]=='p')
        {
            count=count+1;
            break;
        }
    }
       return count;
    }
};