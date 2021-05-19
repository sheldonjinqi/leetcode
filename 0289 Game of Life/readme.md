# Notes 
* Time complexity _O(m*n)_ need to visit every grid
* Space complexity _O(m*n)_ if construct a copy of original grid and operate on it. _O(1)_ if use the policy:
```cpp
dead->live = 2
live->dead = -1
```
