class Solution {
public:
    int nextState(int i, int j,int m, int n, vector<vector<int>> board){
        int live=0, dead=0;
        // int is_alive = board[i][j];
        int is_alive = abs(board[i][j])==1;
        // cout<<"i j "<<i<<" "<<j<<endl;
        for(int a=max(i-1,0); a<min(i+2,m);a++){
            for(int b=max(j-1,0);b<min(j+2,n);b++){
                // check if idx is valid 
                    // cout<<a<<" "<<b<<" "<<min(j+2,n)<<endl;
                    if((a==i && b==j)){
                        continue;
                    }
                    
                    if(abs(board[a][b])==1){
                        live++;
                    }
                    else{
                        dead++;
                    }
            }
        }
        // cout<<"end"<<endl;
        //applying the rules 
        
        // to have O(1) space complexity
        // live->dead , return -1; 
        // dead->live,  return 2; 
        // cout<< is_alive<<" "<<live<<" " << board[i][j]<<endl;
        if(is_alive && (live<2 || live>3)) return -1;
        if(is_alive && (live==2 || live==3)) return 1;
        if(!is_alive && live==3) return 2; 
        return 0;
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        // vector<vector<int>> next_board = board;
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<board.size();i++){
            for(int j=0; j<board[0].size();j++){
                // next_board[i][j] = nextState(i,j,m,n,board);
                board[i][j] =  nextState(i,j,m,n,board);
            }
        }
        for(int i=0;i<board.size();i++){
            for(int j=0; j<board[0].size();j++){
                board[i][j] = board[i][j] >0;
            }
        }
        // board = next_board;
    }
};
