class Solution {
public:
//     int helper(int n , vector<int>& numS){
//         if(numS[n]!=-1) return numS[n];
//         int min_square = n;
//         for(int j=n-1;j>0;j--){
//             int tmp_min = INT_MAX;
//             if(numS[j]>0){
//                 tmp_min = helper(n-j,numS)+numS[j];
//             }
//             else{
//                 tmp_min = helper(n-j,numS)+helper(j,numS);
//             }
//             min_square = min(min_square,tmp_min);
//         }        

//         if(numS[n]==-1) {
//             numS[n] = min_square;
//         }

//         return min_square ; 
//     }
    int numSquares(int n) {
//         if(pow((int)sqrt(n),2)==n) return 1;
//         vector< int> numS(n+1,n);
//         for(int i=0;pow(i,2)<n;i++){
//             numS[pow(i,2)] = 1 ;
//         }
//         vector<int> sqre_vec;
//         int sqrt_idx = sqrt(n);
//         for(int i=1;i<=sqrt_idx;i++){
//             sqre_vec.push_back(pow(i,2));
//         }
//         for(int i=0; i<=n;i++){
//             for(auto j:sqre_vec){
//                 if(j>i) break;
//             numS[i] = min(numS[i],1+numS[i-j]);
//             }
//         }
//         return numS[n];
        //dp method 
        vector<int> dp(n+1,n); //intialize the dp vector to n which is the largest number of perfect square numbers sum to n
        dp[0] = 0;
        for(int i=0;i<=n;i++){
            //loop through each perfect square number that is smaller than n
            for(int j=1;j*j<=i;j++){
                int tmp_min = 1+dp[i-j*j];
                dp[i] = min(dp[i],tmp_min);
            }
        }
        //static dp method 
//         static vector<int> dp{0};
//         // for(int i=1;i<=n;i++){
//         while(dp.size()<=n){
//             int i = dp.size();
//             //loop through each perfect square number that is smaller than n
//             int min_square = n;
//             for(int j=1;j*j<=i;j++){
//                 int tmp_min = 1+dp[i-j*j];
//                 min_square= min(min_square,tmp_min);
//             }
//             dp.push_back(min_square);
//         }
 
        return dp[n];
    }
};
