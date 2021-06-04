class Solution {
public:
    int hammingWeight(uint32_t n) {
        int rslt = 0 ; 
        // for(int j =0;j<32;j++){
        //     if((n&1 >0)){
        //         rslt ++;
        //     }
        //     n>>1;
        // }
        // bit manipulation method 
        while(n>0){
            rslt++;
            n = n&(n-1);
        }
        return rslt;
    }
};
