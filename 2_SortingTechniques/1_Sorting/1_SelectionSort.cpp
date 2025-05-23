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

//* Selection Sort
//* Time Complexity: O(n^2)
//* Space Complexity: O(1)
//* Inplace: Yes
//* Stable: No
//* Advantages: Simple, Inplace, Memory Efficient
//* Disadvantages: Quadratic Time Complexity, Not Stable

/*
 As the name suggest we select minimums 

 eg:
 13   46    24    52    20    9
 0    1     2     3     4     5

 here 9 is minimum...

 so we will select 9 and swap it with 13 with is in the 0th position
 9   46    24    52    20    13
 0    1     2     3     4     5

    then next minimum is 13
    so we will select 13 and swap it with 46 with is in the 1st position

    9   13    24    52    20    46
    0    1     2     3     4     5

    and so on...

!    sudo code
!    for(int i=0; i<=n-2;i++){ // n-2 because last element will be automatically sorted
!        int min = i;
!        for(int j=i; j<=n-1; j++){
!            if(arr[j]<arr[min]){
!                min = j;
!            }
!         swap(arr[i], arr[min]); // swap the minimum element with the ith element
!        }
!    
!    }

*/



void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        // int temp = arr[mini];
        // arr[mini] = arr[i];
        // arr[i] = temp;

        swap(arr[i], arr[mini]);
    }
}







int main() {
    int n;
    cin>>n;
    int arr[n];
    fori(n) cin>>arr[i];
    selection_sort(arr, n);

    fori(n) cout<<arr[i]<<" ";
    return 0;
}