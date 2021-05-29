class Solution {
public:
    bool canJump(vector<int>& nums) {
        //greedy method 
        int farthest_idx = 0 ;
        int curr =0 ;
        while(true){
            int tmp_farthest = 0;
            //go through all posible grids looking for furthest jump 
            while(curr<= farthest_idx){
                tmp_farthest = max(tmp_farthest,curr + nums[curr]);
                // cout<<tmp_farthest<<endl;
                if(tmp_farthest >=nums.size()-1) return true;
                curr++;
            }
            farthest_idx = tmp_farthest;
            if(curr>farthest_idx) return false;
        }
    }
};
