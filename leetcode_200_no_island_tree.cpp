public:
    void mark_island(vector<vector<char>>&grid, int x, int y, int r, int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y]!='1')
           return;
        grid[x][y]='2';
        
        mark_island(grid, x, y-1, r, c);  //left
        mark_island(grid, x, y+1, r, c);  //right
        mark_island(grid, x-1, y, r, c);  //top
        mark_island(grid, x+1, y, r, c);  //down
        
    }
    
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        //for fast input output
        std::ios::sync_with_stdio(false);
        
        int i, j, ans=0, rows=grid.size(), cols=grid[0].size();
        if(rows==0)
            return 0;
        
        for(i=0; i<rows; i++)
        {
            for(j=0; j<cols; j++)
            {
                if(grid[i][j]=='1')
                {
                    mark_island(grid, i, j, rows, cols);
                    ans+=1;
                }
            }
        }
        
        return ans;
    }