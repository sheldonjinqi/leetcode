class Solution {
public:
    unordered_map<int,int> square_map; 
    int helper(int n , vector<int> squares_o){
        int min_square = n;
        vector<int> squares(squares_o.begin(),squares_o.begin()+(int)sqrt(n));
        for(int j=squares.size()-1;j>=0;j--){
            int tmp_min=0;
            if(!square_map.count(n-squares[j])){
                tmp_min = 1+(helper(n-squares[j],squares));
            }
            else{
                tmp_min = 1+square_map[n-squares[j]];
            }  
            min_square = min(min_square,tmp_min);
        }
        if(!square_map.count(n)) square_map[n] = min_square;
        
        return min_square ; 
    }
    int numSquares(int n) {
        // cout<<"calling function "<< n <<endl;
        if(pow((int)sqrt(n),2)==n) return 1;
        vector<int> squares;
        
        int i=1;
        int min_square = n;
        //create a vector of all perfect square numbers that are smaller than n
        while(true){
            squares.push_back(pow(i,2));
            i++;
            int s = pow(i,2);
            if(s>= n) break;
        }
        min_square = helper(n,squares);

        

        return min_square ;
    }
};
