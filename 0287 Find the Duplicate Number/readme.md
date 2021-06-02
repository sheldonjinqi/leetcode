#Notes
* use Floyd's algorithm
    * use two pointer `slow` and `fast` to go through the array
    * find the first intersection of two pointers `2(F+a) = (F+a+n*C)`, where `F` is the step before entering the cycle, `a` is the distance traveled in the cycle, `C` is the total length of the cycle and `n` is the number of times goes around the cycle.
    * move `slow` back to the initial position and slow `fast` pointer down to move one step at a time.
    * two pointers meet at the entrance of the cycle. `F = F+nC = F+a + F`
* Time complexity _O(n)_ and only need constant space. 
