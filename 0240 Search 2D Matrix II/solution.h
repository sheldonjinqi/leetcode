class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n_col = matrix[0].size();
        int n_row = matrix.size();

        int r = 0;
        int c = n_col-1;
        if(n_row==0) return false;
        while(c>=0 && r<n_row){
            if(target==matrix[r][c]){
                return true;
            }
            else if(target>matrix[r][c]){
                r++; //move down since its impossible to have it in this row
            }
            else{
                c--; //move left since its impossible to have it in this col
            }
        }

        // binary search method
        // int left_c =0 ;
        // int right_c = n_col;
        // int left_r = 0 ;
        // int right_r = n_col;
//         for(auto row:matrix){
//             int left_c = 0;
//             int right_c = n_col-1;
//             while(right_c>=left_c){
                
//                 int ind_c = left_c + (right_c-left_c)/2;
//                 // cout<<"left "<<left_c<<" right "<<right_c<<" i "<<ind_c<<endl;
//                 if(row[ind_c]==target){
//                     return true;
//                 }
//                 else if(left_c == right_c){
//                     // cout<<"break"<<endl;
//                     break;
//                 }
//                 else if(row[ind_c]<target){
//                     left_c = ind_c+1;
//                 }
//                 else{
//                     right_c =ind_c-1;
//                 }
//             }
//         }
        // cout<<"here"<<endl;
    
        return false;
        
    }
};
