class Solution {
public:
    vector<vector<int>> ans ;
    void backtracking(int first, vector<int> curr, vector<int> nums,int length){
        if(curr.size()==length){
            ans.push_back(curr);
            return; 
        }
        if(first==nums.size()){
            return ;
        }
        
        for(int i=first; i<nums.size();i++){
            // cout<<i<<endl;
            curr.push_back(nums[i]);
            backtracking(i+1,curr,nums,length);
            curr.pop_back();
        }
    }
    // vector<vector<int>> ans ={{}};

    vector<vector<int>> subsets(vector<int>& nums) {
        // int curr_idx =0 ;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<=curr_idx;j++){
        //         vector<int> tmp = ans[j];
        //         tmp.push_back(nums[i]);
        //         ans.push_back(tmp);
        //     }
        //     curr_idx = ans.size()-1;
        // }
        
        //method 2 backtracking
        vector<int> curr ; 
        for(int i=0;i<=nums.size();i++){
            backtracking(0,curr,nums,i);
        }
        
        return ans; 
    }
};
