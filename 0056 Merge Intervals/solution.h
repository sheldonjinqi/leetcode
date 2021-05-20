class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sort the arry so that the first element is in ascending order 
        sort(intervals.begin(),intervals.end());
        //set the first vector as the initial state of result 2d vector
        vector<vector<int>> ans;
        for(int i=0; i<intervals.size()-1;i++){
            //check if next vector overlaps with previous vector
            if(intervals[i+1][0]<=intervals[i][1]){
                intervals[i+1][1] = max(intervals[i][1],intervals[i+1][1]); //select largest right ends
                intervals[i+1][0] = intervals[i][0];
            }
            //add last vector to result since it can't be merged with the new vector
            else{
                ans.push_back(intervals[i]);
            }
        }
        //add the last vector from intervals 
        ans.push_back(intervals[intervals.size()-1]);
        return ans; 
    }
};
