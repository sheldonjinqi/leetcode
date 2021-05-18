class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //hashmap method
        int threshold = nums.size()/2 ;
        unordered_map<int, int> map;
        for(int i:nums){
            map[i]++;
            //check if this element appears more than threshold
            // if so, it is majority element, set map value to 0 to avoid adding it again.
            if(map[i]>threshold){
                return i;
            }
        }
        return 0;
        
        // sorting method
        // sort(nums.begin(), nums.end());
        // return nums[nums.size() / 2];
        
        //stack method
        // stack<int> stack;
        // for(auto num:nums){
        //     if(stack.empty() || num==stack.top()){
        //         stack.push(num);
        //     }
        //     else if(num !=stack.top()){
        //         stack.pop();
        //     }
        // }
        // return stack.top();
    }
};
