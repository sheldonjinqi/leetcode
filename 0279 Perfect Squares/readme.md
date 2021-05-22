# Notes 
* method1 DP: calculate least number of squares for all number smaller than `n`, use a vector to represent least number of square for each number
* Time complexity: _O(n sqrt(n))_ ; Space complexity: _O(n)_ for the dp vector
* least number of squares sum to `n` can be calculated using `min(1+numSquares(n-k))` where `k` represents all perfect square numbers smaller than `n`
* `static` dp method (setting dp vector to be static) used because there are multiple test cases 
    * Static variables in a Function: When a variable is declared as static, space for it gets allocated for the lifetime of the program 
    * save time when the function is called multiple times.
    * **caution**: value of variable in the previous call gets carried through the next function call.
* **check other method s**
