class Solution {
public:
    int jump(vector<int>& nums) {
        
        //greedy method, always jump to the furthest if possible. 
        if(nums.size()==1) return 0;
        int end = 0; //point to the fathest idx can be reached 
        int end_curr =0 ; //point to the farthest idx can be reached in this step
        int jump =0;
        for(int i=0;i<nums.size()-1;i++){
            // find the furthest idx can be reached from currently available idx.
            end = max(end,i+nums[i]);
            if(i==end_curr) {
                end_curr = end; //update the furthest idx can be reached from previous points
                jump++;
            }
        }
        return jump;
        
    }
};
