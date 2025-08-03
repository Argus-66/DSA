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
*   Quick Sort
*   Time Complexity: O(n log n) on average, O(n^2) in the worst case
*   Space Complexity: O(log n) for the recursive stack

*   slightly better than merge sort

*   Inplace: Yes
*   Stable: No
*   Advantages: Fast, Inplace
*   Disadvantages: Not stable, Worst case can be O(n^2)
*   Quick Sort is a Divide and Conquer algorithm that selects a     'pivot' element and partitions the array into two halves, one with elements less than the pivot and the other with elements greater than the pivot. It then recursively sorts the two halves.

?    Pick a Pivot
*    [ 4, 6, 2, 5, 7, 9, 1, 3]
?    Let's say we pick 4 as the pivot
*    [          4            ]
?    Smaller on left and then larger on right
*    [ 2, 1, 3, 4, 6, 5, 7, 9]
?    Now we have two parts
*    [ 2, 1, 3 ]   [ 6, 5, 7, 9 ]
?    Now we will sort the left part
?    in the same manner, pick a pivot, partition the array smaller on left and larger on right
*    [    2    ]
*    [ 1, 2, 3 ]
*    [ 1, 2, 3 ]   [ 6, 5, 7, 9 ]
?    Now we will sort the right part
*                  [ 6, 5, 7, 9 ]
*                  [    6       ]
*                  [ 5, 6, 7, 9 ]
?    Now we have two sorted parts
*    [ 1, 2, 3 ]   [ 5, 6, 7, 9 ]
?    Now we will combine the two parts
*    [ 1, 2, 3, 4, 5, 6, 7, 9 ]
?    And we are done
*/

class Solution {
public:

    int partition(vector<int>&arr, int low, int high){
        int pivot = arr[low];
        int i=low;
        int j = high;

        while(i<j){
            while(arr[i]<= pivot && i<=high-1){
                i++;
            }

            while(arr[j]> pivot && j>=low+1){
                j--;
            }

            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int>&arr, int low, int high){
        if(low < high){
            int pIndex = partition(arr,low,high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }

    vector<int> quickSort(vector<int>& arr) {
        qs(arr, 0, arr.size()-1);
        return arr;
    }
};




int main() {
    
    return 0;
}