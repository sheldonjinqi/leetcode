#Notes
* For each number in vector, the maximum product subarray could have three scenarios 
    * current value is larger than the previous subarray product
    * product of current value and previous maximum subarray product is largest (when max previous product is positive and curr is positive)
    * product of current value and previous minimum product is largest (when min previous product and curr are both negative)
* Time complexity: _O(N)_ 
* Space complexity: _O(1)_
