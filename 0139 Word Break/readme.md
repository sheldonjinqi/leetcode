# Notes 
* substing() function has _O(n)_ time complexity 
* hashing of string take _O(n)_ time 
* Comparing two strings in O(1) time complexity
* method 1 recursive with memozation :
    * for each substring that is part of the dictionary, check if the remaining substring is also part of the dictionary
    * store values in a map, to avoid redundant calculation. 
* method 2 DP: 
    * use a vector to represent if a substring can be semanted
    *  a substring can be segmanted iff the two substring of it can be found in the dictionary.
    *  can convert a vector into unordered set by using ` unordered_set<T> name(vec.begin(),vec.end()`
* Time complexity:  _O(n^3)_ for both method
* Space complexity: _O(n)_ for both method
