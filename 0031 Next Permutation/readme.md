# Notes
* lexicographic order.
* next greater can be found by finding `a[i]>a[i-1]`, swap `a[i-1]` with the smallest `a[k]` where `k>i`, and then put sub-vector `a[i:]` in ascending order.
*  Time complexity: _O(n)_, worst case need to run 2*n scan
*  Space complexity: _O(1)_, no extra space needed.
