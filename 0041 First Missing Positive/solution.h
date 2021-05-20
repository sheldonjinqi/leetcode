class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // use STL sort 
        int smallest = 1; 
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]<1) continue;
//             if(nums[i]==smallest){
//                 smallest++;
//             }
            
//         }
//         return smallest;

        //method 2
        
        
        //clear up the data, set negative numbers and impossible numbers to 1
        int flag = 0;
        for(auto& i: nums){
            if(i==1) flag=1;
            if(i<=0 || i>nums.size()) i=1;
        }
        if(!flag) return 1;

        //nums[number] = negative  if number exists nums, only set negative once 
        for(auto i:nums){
            if(nums[abs(i)-1] >0){
                nums[abs(i)-1] *= -1;    
            }
        }
        nums[0] = -1;
        //positive value in nums means the number corresponding to the idx doesn't exist, which is the smallest missing
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0) return i+1; 
        }
        // the list is full next interger 
        return nums.size()+1;
    }
};
