class Solution {
public:
    int numTrees(int n) {
        // int count=0;
        vector<int> numTree_vec (n+1,0);
        numTree_vec[0]=1;
        numTree_vec[1]=1; 

        // faster method
        for(int i=2;i<=n;i++){
            // cout<<"here"<<endl;
            for(int j=1;j<=i;j++){
                // cout<<i<<" "<<j<<endl;
                numTree_vec[i] += numTree_vec[j-1]*numTree_vec[i-j]; //possible #tree for each number as root
            }
            // cout<<"i: "<<numTree_vec[i]<<endl;
        }
        return numTree_vec[n];
        // for(int i=1;i<=n;i++){
        //     int left= i==1? 1:numTrees(i-1);
        //     int right= i==n? 1:numTrees(n-i);
        //     count += left*right;
        // }

        // numTree_vec[n] = count;
        // for(int i=1;i<n-1;i++){
        //     numTree_vec[i] = 2*numTree_vec[i-1]+;
        // }
    }
};
