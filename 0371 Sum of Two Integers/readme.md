# Notes
**add complexity analysis**
* Bitwise operators can be used to perform addition of integers
* **XOR** is 1 only when two bit are different calculates the sum with out carry(when both number has 1 at a specific digit)
* **&** is 1 when both bits are 1, and therefore used to calculate the carry. 
* Use iterative or recursive method to calculate the sum until `carry=0`. shift carry to left by 1 each time.
* When calculating sum with negative numbers, can't shift carry to left directly since signed number is represented as 2-complement, thus need to represent carry using `unsigned int`.
