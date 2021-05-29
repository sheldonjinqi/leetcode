class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sorting method with hash table 
        vector<vector<string>> ans; 
        
        unordered_map<string,vector<string>> map;
        for(auto str:strs){
            string tmp = str;
            sort(tmp.begin(),tmp.end());
            if(map.count(tmp)){
                map[tmp].push_back(str);
            }
            else{
                map[tmp] = vector<string>{str};
            }
        }
        for (auto  & pair : map) {
            ans.push_back(pair.second);
        }

        
        // without using sort, need to figure out a hash function for 
        //unordered_map<vector<int>,vector<string>> map;
        // for(auto str:strs){
        //     vector<int> tmp(26,0);
        //     // for(auto c:str){
        //     //     tmp[c-'a']++;
        //     //     // cout<<c-'a'<<endl;
        //     // }
        //     if(map.count(tmp)){
        //         map[tmp].push_back(tmp);
        //     }
        //     else{
        //         map[tmp] = vector<string>{str};
        //     }
        // }
        return ans;
    }
};
