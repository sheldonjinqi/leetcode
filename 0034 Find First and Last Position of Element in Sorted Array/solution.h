class Solution {
public:
//     int binarySearch(vector<int> nums, int l, int r){
        
//     }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int left=0,right = nums.size()-1;
       
        vector<int> ans(2,-1);
        if(nums.empty()) return ans;
        if(target <nums[0]|| target>nums[nums.size()-1]) return ans;
        int idx =-1;
        int flag =0;
        int lb=-1, ub=-1;
       while(left<=right){
            idx = (left+right)/2;
            if(nums[idx]==target){
                //find the lower bound idx
                if(idx==0 ||nums[idx-1]!=target){
                    ans[0] =idx;
                    break;
                }
                right = idx-1;

            }
            else if(nums[idx]<target){
                left=idx+1;
                continue;
            } 
            else{
                right=idx-1;
                continue;
            }
        }
        left =0;
        right = nums.size()-1;
       while(left<=right){
            idx = (left+right)/2;
           // cout<<left<<" "<<right<<endl;
            if(nums[idx]==target){
                //find the upper bound idx
                // cout<<idx<<endl;
                if(idx==nums.size()-1 ||nums[idx+1]!=target){
                    ans[1] =idx;
                    break;
                }
                left = idx+1;

            }
            else if(nums[idx]<target){
                left=idx+1;
                continue;
            } 
            else{
                right=idx-1;
                continue;
            }
        }
        return ans;
//          //binary search of the numer 
//         while(left<=right){
//             idx = (left+right)/2;
//             if(nums[idx]==target){
//                 flag = 1;
//                 left=idx;
//                 right=idx;
//                 break;
//             }
//             else if(nums[idx]<target){
//                 left=idx+1;
//                 continue;
//             } 
//             else{
//                 right=idx-1;
//                 continue;
//             }
//         }
//         if(flag==0) return ans;
//         ans[0] = idx;
//         ans[1] = idx;
//         while(left>=0 ){
//             if(nums[left]==target && left<ans[0]) ans[0]=left;
//             if(nums[left]<target) break;
//             left --;
//         }
//         while(right<nums.size()){
//             if(nums[right]==target && right>ans[1]) ans[1]=right;
//             if(nums[right]>target) break;
//             right++;
//         }
//         return ans; 
        
//         //brute force method
//         while(nums[left]<=target || nums[right]>=target){
//             if(nums[left]==target && ans[0]==-1){
//                 ans[0] = left;
//             }

//             if(nums[right]==target && ans[1]==-1){
//                 ans[1] = right;
//             }
//             if(ans[0] >=0 && ans[1] >=0 ) return ans;
//             left++;
//             right--;
//         }
//         return ans;
            
    }
};
