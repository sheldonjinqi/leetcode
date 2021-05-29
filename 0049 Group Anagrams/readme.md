# Notes 
* Sorting method: use sorted str as hashtable key, and value of hashtable is the vector of strings that are same after sorting.
* Time complexity: _O(Nklog(k))_ N is the number of string, k is the length of longest string 
* Space complexity: _O(Nk)_
* To speed up this algorithm, can replace sorting by using a vector to represent the occurance of each letter, just need to figure out the hash function of `vector<int>`.
