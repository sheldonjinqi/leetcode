class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //loop through backwards until finds a[i]>a[i-1]
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                int swap_idx = nums.size()-1;
                for(int j=i+1; j<nums.size();j++){
                    if(nums[j]<=nums[i-1]){
                        swap_idx = j-1;
                        break;
                    }
                }
                // swap the smallest value that is larger than nums[i-1] from behind
                swap(nums[swap_idx],nums[i-1]);
                //make sure the value behind nums[i-1] is the smallest
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
        return;
    }
};
