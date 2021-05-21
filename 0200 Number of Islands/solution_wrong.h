class Solution {
public:
    int island_idx =0;
    void update(vector<vector<int>>&grid,int val1, int val2){
        // cout<<"replaceing "<<val1<<" with "<< val2<<endl;
        for(int i =0;i<grid.size();i++){
            for(int j=0; j< grid[0].size();j++){
                // cout<<grid[i][j]<<endl;
                if(grid[i][j]==val1) {
                    // cout<<grid[i][j] ;
                    grid[i][j]=val2;
                    // cout<<grid[i][j]<<endl;
                }
            }
        }
        return ; 
    }
    int checkNeighbor(vector<vector<int>>&grid, int x, int y){
        if(grid[x][y]==0) return 0; 
        int top_val =0 ;
        int left_val = 0 ;
        int curr_val = 0;
        //assign the smallest island idx connected to this cell
        // update other connected cell 
        // island idx ++ if no other land connected to this 
        //check if its top neighboard exists and if it is a land
        if(x-1>=0 && grid[x-1][y] != 0 ) top_val = grid[x-1][y] ;
        //check if left neighbor exists and if its a land 
        if(y-1>=0 && grid[x][y-1] !=0 ) left_val = grid[x][y-1] ;
        // cout<<top_val<<" "<<left_val<<endl;
        if(top_val!=0 && left_val!=0){
            if(top_val>left_val){
                grid[x][y] = left_val;
                // cout<<"test1 "<<x<<"x"<<y;
                update(grid,top_val, left_val); //update top value 
                island_idx --;
                
            }
            else if(top_val<left_val){
                grid[x][y] = top_val; 
                // cout<<top_val<<" "<<left_val<<endl;;
                // cout<<"test2 "<<x<<"x"<<y;
                update(grid,left_val, top_val); //update left value
                island_idx --;
            }
            else{
                grid[x][y] = top_val;
            }
        }
        else if(top_val!=0 && left_val==0){
            grid[x][y] = top_val; 
        }
        else if(left_val!=0 && top_val==0){
            grid[x][y] = left_val;
        }
        else {
            // cout<<"no left or top"<< x <<" "<<y<<endl;
            // cout<<island_idx<<endl;
            island_idx = ++island_idx ; 
            // cout<<x<<" "<<y<<" "<<island_idx<<endl;
        
            grid[x][y] = island_idx;
            // cout<<grid[x][y]<<endl;
            // cout<<island_idx<<endl;
        }
            
        return grid[x][y];
    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> int_grid(grid.size(),vector<int>(grid[0].size()));
        for(int i=0; i<grid.size();i++){
            for(int j=0; j<grid[0].size();j++){
                int_grid[i][j] = grid[i][j] -'0';
                int_grid[i][j] = checkNeighbor(int_grid,i,j);
                // cout<<grid[i][j]<<"  ";
            }
            // cout<<endl;
        }
        int island =0 ;
        for(auto vec:int_grid){
            for(auto i:vec){
                cout<<i<<"\t";
                if(i>island) island=i;
            }
            cout<<endl;
        }
        return island; 
    }
};
