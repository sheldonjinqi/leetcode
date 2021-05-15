class Solution {
public:
    vector<vector<int>> rslt_vec ;
    void permute_helper(vector<int>& nums, int first, int right_p){
        //basecase: no swap, add the array to the 2d vector
        if(first==right_p){
            rslt_vec.push_back(nums); 
        }
        else{
            // loop through each possible swap
            for(int i=first; i<right_p+1; i++){
                swap(nums[first],nums[i]);
                permute_helper(nums, first+1, right_p); //move the first to next place 
                swap(nums[first],nums[i]); //swap back to keep the original order for next operation
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int first=0;
        int right_p= nums.size()-1;
        permute_helper(nums, first, right_p);
        return rslt_vec; 
    }
};
