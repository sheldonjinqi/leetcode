# Notes
* Time complexity: _O(nlog(n))_ because of the sorting, then just needs to go through all vectors in `intervals`
* Space complexity: _O(max(log(n),k))_  where sorting requires `log(n)` and an extra vector for storing the answer with `k` different intervals.
