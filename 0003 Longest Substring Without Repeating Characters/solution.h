class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> string_map;
        int left=0, right=0; 
        int max_L =0 ;
        while(right<s.size()){
            //check if found a repeating char
            // if so update left pointer if the repeating char is after left pointer.
            if(string_map.count(s[right])){
                left = max(left,string_map[s[right]]+1) ;
            }
            string_map[s[right]] = right;
            int curr_L = right-left+1;
            if(curr_L>max_L) max_L = curr_L; 
            right++;
        }
        return max_L;
    }
};
