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

void explainPair(){
    pair<int, int> p1 = {1,3};
    cout << "Pair elements: " << p1.first << " and " << p1.second << endl;    // Output: 1 and 3

    pair<int, pair<int, int> > p2 = {1, { 2, 3}};
    cout << "First element: " << p2.first << endl;  // Output: 1
    cout << "Second element: " << p2.second.first << " and " << p2.second.second << endl;     // Output: 2 and 3

    pair< int, int > arr[] = {{1, 2}, {3, 4}, {5, 6}};
    //                          0       1       2
    cout << arr[1].second;  // Output: 4
}


int main() {


    return 0;
}