# Notes
* Uses backtracking algorithm to explore all possible choices 
    * swap every numbers after the first number with the first number
    *  set the next number as the first numer
    *   repeat
* Uses swap function to swap values of two variable
    * `swap( A, B)`
* Can also use `next_permutation` from STL 
   *  Permutes the range (first, last) into the next permutation, where the set of all permutations is ordered **lexicographically** with respect to operator< or comp.
   *  needs to use sort before using `next_permutation`, otherwise won't have all perumutations.
