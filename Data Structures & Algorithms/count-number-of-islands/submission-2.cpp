class Solution {
public:
   void dfs(int i,int j,vector<vector<char>>& grid,int count, vector<vector<bool>>& visited){
         
   if(i < 0 || i >= grid.size() ||
     j < 0 || j >= grid[0].size() ||
     grid[i][j] == '0'||visited[i][j])
         return;
         if(grid[i][j]=='1'){
            visited[i][j]=true;
         }
        dfs(i+1,j,grid,count,visited);

        dfs(i-1,j,grid,count,visited);

        dfs(i,j+1,grid,count,visited);
        
        dfs(i,j-1,grid,count,visited);
    


         }

   
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'&&!visited[i][j]){
                    dfs(i,j,grid,count,visited);
                        count++;
                }
            }
        }
        return count;
    }
};
