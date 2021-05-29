#Notes 
* brute force method: _O(n^2)_, for each element check all possible subarray; 
* hashmap method: calculate cumulative sum for each idx, `sum[i]-sum[j]` is the sum of continuous subarray `i` and `j`. Each time calculating a new sum, check if `sum-k` exists in hashtable, if so, increase `count` by number of occurance of `map[sum-k]`
* using hashmap leades to _O(n)_ in both time and space.
