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
?   Insertion Sort
*   Time Complexity: O(n^2)\
*   Space Complexity: O(1)
*   Inplace: Yes
*   Stable: Yes
*   Advantages: Simple, Inplace, Stable
*   Disadvantages: Not efficient for large data sets
*
*   Takes the element and inserts it in the correct position
*   and returns
*   
*   14    9    15    12    6    8    13
?   0     1    2     3     4    5    6
*
*   9    14
*   9    14    15    12 here 12 will swap with 15 and then will swap with 14
*
*   9    12    14    15    6    8    13
? 6 goes on swapping with 15, 14, 12 and 9
*   6    9    12    14    15    8    13
? 8 goes on swapping with 15, 14, 12 and 9
*   6    8    9    12    14    15    13
? 13 goes on swapping with 15
*   6    8    9    12    13    14    15
*   Sorting done
!   STOP



! SUDO CODE 
! for(int i=0; i<=n-1; i++)
!   j = i;
!   while(j>0 && arr[j-1]>arr[j])
!       swap
!       j--

*/



void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j =i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}



int main() {


    return 0;
}

