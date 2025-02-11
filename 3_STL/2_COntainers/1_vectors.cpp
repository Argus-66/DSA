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

// Array size cannot be changed once it is declared.
// Thats why we use Vector in C++.
// Vector is dynamic array and can be resized at runtime.

void explainVector(){

    vector<int> v;  // { }   // Initialize an empty vector

    v.push_back(1);     // {1} // Add element at the end
    v.emplace_back(2);  // {1, 2} // Add element at the end using emplace_back
    // emplace_back() is faster than push_back() for small vectors.

    vector<pair<int, int>> vp;  // { }   // Initialize an empty vector of pairs

    vp.push_back({1, 2});     // {{1, 2}} // Add element at the end
    vp.emplace_back(3, 4);  // {{1, 2}, {3, 4}} // Add element at the end using emplace_back
}



int main() {


    return 0;
}