# Notes
* Use sliding window with left and right pointer to solve the problem in one pass
* Use Hashtable to check for repeating char
* Update the position of left ptr when finding a repeating char
* move left ptr to the right of repeating char if it is after the left ptr
* Time complexity: _O(n)_; 
* Space complexity: _O(k)_ where k is the number of non-repeating char in given string 
