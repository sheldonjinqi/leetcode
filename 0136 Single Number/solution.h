class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //hashtable 
        // unordered_map<int,int> hashtable; 
        // for(int i=0;i<nums.size();i++){
        //     hashtable[nums[i]] ++ ;
        // }
        // for(auto &pair:hashtable){
        //     if(pair.second ==1) return pair.first;
        // }
        // return 0 ;
    // bitwise operation 
        int a=0 ;
        for(auto i:nums){
            a = a^i;
        }
        return a;
    }
};
