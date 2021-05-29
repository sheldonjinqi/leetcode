class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //hashtable method 
        unordered_map <int, int > map ; //<sum,occurance> 
        map[0] = 1;
        int sum =0;
        int count =0;
        for(auto i:nums){
            //calculate cumulative sum 
            sum += i ; 
            // check if there is a subarray that sum to k
            if(map.count(sum-k)){
                count += map[sum-k];
            }
            map[sum] ++;
        }
        return count;
    }
};
