class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int rslt = nums[0];
        int max_curr  = nums[0]; //keeps the maximum product until current position
        int min_curr = nums[0]; //keeps the minimum product until current position in the case of negative number
        for(int i=1;i<nums.size();i++){
            int curr = nums[i];
            int tmp_max = max(curr,max(curr*max_curr,curr*min_curr));
            min_curr = min(curr,min(curr*max_curr,curr*min_curr));
            //update max_curr
            max_curr = tmp_max;
            rslt = max(rslt,max_curr);
        }
        return rslt;
    }
};
