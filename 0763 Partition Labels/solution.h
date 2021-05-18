class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> fathestIDX (26,0); 
        vector<int> rslt;
        for(int i=0; i<s.size();i++){
            fathestIDX[s[i]-'a']=i;
        }
        int right=0;
        int left =0;
        for(int i=0; i<s.size();i++){
            right = max(right,fathestIDX[s[i]-'a']);
            if(i==right){
                rslt.push_back(i-left+1);
                left=i+1;
            } 
        }
        return rslt;
    }
};
