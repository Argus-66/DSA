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

// List of functions to explain 
// 1. list: It is a dynamic array-like container. It allows duplicate elements.
// Insert in a vector is costly than list because it requires resizing the array.
// push is cheap than insert 


void explainList(){
    list<int> l;

    l.push_back(1);    // Insertion at the end    //  1 
    l.emplace_back(2);   // Insertion at the end using emplace_back //  1, 2 

    l.push_front(0);   // Insertion at the beginning    //  -1, 0, 1, 2 
    l.emplace_front(-1);  // Insertion at the beginning using emplace_front //  -1, 0, 1, 2 

    // rest of the functions are similar to vector
    // begin, end, rbegin, rend, front, back, size, empty, clear, swap...

    //looping through list
    for (auto &x : l) {
        cout << x << " ";
    }
    cout << endl; // prints: -1 0 1 2

}


int main() {
    explainList();

    return 0;
}