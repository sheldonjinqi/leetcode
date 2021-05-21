# Notes 
* DFS method: If grid is land, check its neighbors for land until no neighbor is land. All visited neighbors are connected .
* Time complexity: _O(mn)_
* Space complexity: _O(mn)_ recursive call of DFS takes memory, when we have one single island that fills the grid like snake, we have `mn`
