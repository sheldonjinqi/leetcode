class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //if element is set to zero, set the value to negative
        int row = matrix.size();
        int col = matrix[0].size();
   
        int first_col = 1; //1 if first col is not empty
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){

                if(matrix[i][j]==0){    
                    matrix[i][0] = 0;
                    if(j==0){
                      first_col=0;
                        continue;
                    } 
                    matrix[0][j] =0;
                }
            }
        }
        //set values start at [1,1]
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        
        //set value for first row
        if(matrix[0][0]==0){
            fill(matrix[0].begin(),matrix[0].end(),0);
        }
        
        //set values for firse col
        if(!first_col){
                for(int i=0;i<row;i++){
                    matrix[i][0]=0;
                }
        }
        }
};
