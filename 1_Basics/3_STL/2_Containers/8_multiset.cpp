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

//  MultiSet 
//  a multiset is a set in C++ that allows duplicate elements.
//  obyessorted not unique rules.
//  All operations like insert, erase, find, and count have average time complexity of O(log n)
//  





void explainMultiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(5);

    cout << "Size: " << ms.size() << endl; // 6

    for(auto it = ms.begin(); it!= ms.end(); it++)  // 1, 1, 1, 2, 2, 3, 5
        cout << *it << " ";
    cout << endl;

    ms.erase(1);  // remove all occurrences of 1

    for(auto it = ms.begin(); it!= ms.end(); it++)  // 2, 2, 3, 5
        cout << *it << " ";
    cout << endl;

    ms.erase(ms.find(2));  // remove first occurrence of 2

    for(auto it = ms.begin(); it!= ms.end(); it++){  // 2, 3, 5
    cout << *it << " ";
    }
    cout << endl;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);   // 1, 1, 1, 2, 3 , 5

    for(auto it = ms.begin(); it!= ms.end(); it++)  // 1, 1, 1, 2, 3, 5
        cout << *it << " ";
    cout << endl;

    ms.erase(ms.find(1), next(ms.find(1), 2));  // remove 2 occurrences of 1

    for(auto it = ms.begin(); it!= ms.end(); it++){ // 3, 5
        cout << *it << " ";
    }
    cout << endl;

    // Rest are same as set
}


int main() {
    explainMultiSet();

    return 0;
}