#include <bits/stdc++.h>
using namespace std;

#define ll                       long long int
#define test                     ll t; cin>>t; while(t--)
#define ld                       long double
#define tolower(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define PI                       3.1415926535897932384626433832795l
#define fori(n) for (int i = 0; i < n; i++)     //fori(n) {}
#define forj(n) for (int j = 0; j < n; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define pb                       push_back
#define set                      set<ll>
#define map                      map<ll,ll>
#define mod                      1000000007

/*
? Merge Sort
* much better than bubble sort, selection sort, and insertion sort
* Time Complexity:
*       Best Case	O(n log n)
*       Average Case	O(n log n)
*       Worst Case	O(n log n)

* Space Complexity: O(n)
* Inplace: No
* Stable: Yes
* 
* Basically means Divide and Merge
* Merge Sort is a Divide and Conquer algorithm that divides the array into halves, sorts them, and then merges the sorted halves.
* 
*    [3,    1,    2,    4,    1,    5,    2,    6,    4]
?    Divide in 2 parts 4,5 or 5,4 lets go with 5,4 path

*    [3,    1,    2,    4,    1]              [5,    2,    6,    4]
?    Divide again

*    [3,    1,    2]       [4,    1]             [5,    2]       [6,    4]
?    Divide again

*    [3,    1]        [2]         [4]    [1]           [5]    [2]        [6]    [4]
?    Divide again

*    [3]  [1]   [2]     [4]  [1]        [5]  [2]    [6]  [4]
?    Now its all divided into single elements


?    Now Starts Merging and Sorting
?    first the bottom elements

*    [1,     3]     [2]     [4]  [1]        [5]  [2]    [6]  [4]

?    2nd layer
*    [1,     3]    [2]     [1,    4]        [2,     5]     [4,    6]

?   3rd layer
*    [1,    2,    3]       [1,    4]        [2,     5]     [4,    6]

?   4th layer
*    [1,    1,    2,    3,    4]       [2,    4,    5,    6]

?   Final Layer
*    [1,    1,    2,    2,    3,    4,    4,    5,    6]

! SORTED
! STOP
*/






int main() {


    return 0;
}
