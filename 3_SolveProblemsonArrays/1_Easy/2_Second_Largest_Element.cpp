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


int main() {
    int arr[6]={1,2,4,7,7,5};
    int slargest =arr[0];
    int largest =arr[0];
    int n=sizeof(arr);
    
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest = arr[i];
        } else if(arr[i]>slargest && arr[i]!= largest){
            slargest = arr[i];
        }
    }
    return 0;
}