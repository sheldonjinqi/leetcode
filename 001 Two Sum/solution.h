class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map <int, int> num_map;
        for(int i=0; i<nums.size();i++){
            int complement = target-nums[i];
            if(num_map.count(complement)){
                ans.push_back(i);
                ans.push_back(num_map[complement]);
                break;
            }
            num_map[nums[i]]=i;
        }
        return ans;

    }
};
