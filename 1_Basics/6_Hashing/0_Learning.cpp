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

Hashing
Hashing is atechnique used in Data Structures and Algorithms to store ans retrive dada efficiently.
Hashing is a technique that is used to uniquely identify a specific object from a group of similar objects.
It involves mapping keys to values using a hash function and storing them in a hash table.

A good hash function should: 
✔️ Be fast
✔️ Distribute data uniformly
✔️ Minimize collisions

Hashing is Pre Storing and Fetching







*/






int main() {
    int n; cin >> n;
    int arr[n];
    for( int i=0; i<n; i++ ){
        cin >> arr[i];
    }


    // pre computation (given max number of elements is 13)
    int hash[13] = {0};
    for( int i=0; i<n; i++ ){
        hash[arr[i]]++;
    }


    int q; cin >> q;
    while(q--){
        int number; cin >> number;

        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}