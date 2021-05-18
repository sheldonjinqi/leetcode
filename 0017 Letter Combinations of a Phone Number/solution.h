class Solution {
public:
    vector<string> rslt;
    unordered_map<char,string> phone_map = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return rslt;
        }
        string curr = "";
        helper(digits,curr,0);
        return rslt;
    }
    void helper(string digits, string curr, int i ){
        if(i==digits.size()){
            rslt.push_back(curr);
        }
        else{
            for(auto c:phone_map[digits[i]]){
                helper(digits,curr+c,i+1);
            }
        }
    }
};
