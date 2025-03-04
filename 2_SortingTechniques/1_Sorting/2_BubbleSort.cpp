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
* Bubble Sort
* Time Complexity: O(n^2)
* Space Complexity: O(1)
* Inplace: Yes
* Stable: Yes
* Advantages: Simple, Inplace, Stable
* Disadvantages: Quadratic Time Complexity


* Pushes the Maximum to the last
* Does by adjacent swaps

* 13  46  24  52  20  9
? 13 is smaller than 46 no movement, moving to the next... 46 is bigger than 24 therefor
* 13  24  46  52  20  9
? 46 is smaller than 52 so no change, 52 is greater than 20
* 13  24  46  20  52  9

* 13  24  46  20  9  52 
? 52 has been pushed to the last which is the maximum
* 13  24  20  46  9  52

* 13  24  20  9  46  52 
? 46 has been pushed to 2nd last

* 13  20  24  9  46  52
* 13  20  9  24  46  52
* 13  9  20  24  46  52

* 9  13  20  24  46  52
? Sorting done
! STOP




! Sudo Code
!   for(int i=n-1; i>=1; i--){
!       for(int j=0; j<=i-1; j++){

!           if(arr[j]>arr[j+1]){
!               swap;
!
!    

*/
 void bubble_sort(int arr[], int n){
    int didSwap = 0;
    for(int i= n-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
    if(didSwap == 0) break;
    }
 }
/*
! we did didSwap so that if there is no swap in the first time, there is no need to check the others because the array is already sorted... 
*/




 int main() {
    int n;
    cin>>n;
    int arr[n];
    fori(n) cin>>arr[i];
    bubble_sort(arr, n);

    fori(n) cout<<arr[i]<<" ";
    return 0;
}