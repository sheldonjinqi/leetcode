class Solution {
public:
    void DFS(vector<vector<char>>& grid, int i, int j){
        grid[i][j] = 0; //set the grid as visited
        if(i-1>=0 && grid[i-1][j] == '1') DFS(grid,i-1,j); //if top neighbor exists and is a land, trigger DFS
        if(j-1>=0 && grid[i][j-1] == '1') DFS(grid,i,j-1); //if left neighbor exists and is a land, trigger DFS
        if(i+1<grid.size() && grid[i+1][j] == '1') DFS(grid,i+1,j); //if bottom neighbor exists and is a land, trigger DFS
        if(j+1<grid[0].size() && grid[i][j+1] =='1') DFS(grid,i,j+1); //if right neighbor exists and is a land, trigger DFS
    }
    int numIslands(vector<vector<char>>& grid) {
        int count =0 ;
        for(int i=0; i<grid.size();i++){
            for(int j =0; j<grid[0].size();j++){
                if(grid[i][j] =='1'){
                    count++;
                    DFS(grid,i,j);
                }
            }
        }
        return count;
    }
};
