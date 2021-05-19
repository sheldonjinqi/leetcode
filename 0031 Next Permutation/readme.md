# Notes
* lexicographic order.
* next greater can be found by finding `a[i]>a[i-1]`, swap `a[i-1]` with the smallest `a[k]` where `k>i`, and then put sub-vector `a[i:]` in ascending order.
