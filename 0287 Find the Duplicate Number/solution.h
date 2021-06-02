class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //sort 
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]) return nums[i];
        // }
        // return 0;
        //brute force 
        // for(int i=0; i<nums.size()-1;i++){
        //     for(int j =i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //              return nums[i];
        //         }
        //     }
        // }
        // return 0;
        
        
        // Floyd's algorithm
        int slow = nums[0];
        int fast = nums[0];
        
        //find the intersection point 
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow !=fast);
        // start the slow pointer at begining, slow down the fast pointer, they intersect at the entrance of the cycle         
        slow = nums[0];
        while(slow != fast){
            slow=nums[slow];
            fast = nums[fast];
        }
        
        return fast;
    }
};
