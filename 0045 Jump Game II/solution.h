class Solution {
public:
    int jump(vector<int>& nums) {
        int count =0, curr_end=0, farthest_idx=0;
        // greedy method, always take the jump leads to the furthest
        if(nums.size()==1){
            return 0;
        }
        for(int i=0;i<nums.size()-1;i++){
            farthest_idx = max(farthest_idx,i+nums[i]);
            if(i == curr_end){
                curr_end = farthest_idx;
                count++;
            }
        }
        return count;

    }
};
