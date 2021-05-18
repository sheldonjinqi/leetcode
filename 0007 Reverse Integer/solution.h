class Solution {
public:
    int reverse(int x) {

        int rslt =0 ;
        while(x!=0){
            //check if rslt in the signed 32-bit range, return 0 if not 
            if(rslt>(pow(2,31)-1-x%10)/10 || rslt <-(pow(2,31)-x%10)/10){
            return 0;
            }
            rslt = rslt*10 + x%10; 
            x /=10;
        }
        return rslt ;
    }
};
