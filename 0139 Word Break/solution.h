class Solution {
public:
    unordered_map<string,int> memoMap ;
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(),wordDict.end());
        wordSet.insert("");
        int flag =0;
        //recursive with memozation
//         for(int i=0; i<s.size();i++){

//             //check if the string exists
//             // if exists, update the left pointer
//             if(wordSet.count(s.substr(0,i+1))){
//                 flag = 1 ;
//                 string remain_str = s.substr(i+1,s.size()-i-1);
//                 //check memozation
//                 if(remain_str.empty()){
//                     return flag;
//                 }
//                 else if(!memoMap.count(remain_str)){
//                     memoMap[remain_str] = wordBreak(remain_str,wordDict);
//                 }
//                 flag = flag & memoMap[remain_str] ;
//                 if(flag) return flag;
//            }
//         }
        
        //DP 
        vector<int> dp(s.size()+1,0);
        dp[0] = 1; 
        for(int i=1; i<=s.size();i++){
            for(int j=0; j<i;j++){
                // string s_tmp = s.substr(0,i);
                // string s1 = s_tmp.substr(0,j);
                string s2 = s.substr(j,i-j);
                if(dp[j] && wordSet.count(s2)) dp[i]=1;
            }
        }

        return dp[s.size()];        
    }
};
