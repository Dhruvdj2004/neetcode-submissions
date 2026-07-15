class Solution {
public:
  void dfs(int i, int j, vector<vector<char>>& grid, int& count,
             vector<vector<bool>>& visited) {

        if (i < 0 || i >= grid.size() ||
            j < 0 || j >= grid[0].size() ||
            grid[i][j] == 'X' || visited[i][j])
            return;

        if (grid[i][j] == 'O'){
            grid[i][j] = '#';
        }

        visited[i][j] = true;

        dfs(i + 1, j, grid, count, visited);
        dfs(i - 1, j, grid, count, visited);
        dfs(i, j + 1, grid, count, visited);
        dfs(i, j - 1, grid, count, visited);
    }
    void solve(vector<vector<char>>& grid) {
        int count = 0;
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < grid.size(); i++) {
              if(grid[i][0]=='O'){
               dfs(i, 0, grid, count, visited);
              }
        }
         for (int j = 0; j< grid[0].size(); j++) {
              if(grid[0][j]=='O'){
               dfs(0, j, grid, count, visited);
              }
        }
         for (int i = 0; i < grid.size(); i++) {
              if(grid[i][grid[0].size()-1]=='O'){
               dfs(i, grid[0].size()-1, grid, count, visited);
              }
        }
         for (int j= 0; j < grid[0].size(); j++) {
              if(grid[grid.size()-1][j]=='O'){
               dfs(grid.size()-1, j, grid, count, visited);
              }
        }

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 'O')
                   grid[i][j]='X';
            }
              for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '#')
                   grid[i][j]='O';
            }
        }

        return ;
    }
};

  

    