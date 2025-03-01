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


// Deque
// all functions of deque are same as vector, but it allows faster insertion and deletion at both ends.

void explainDeque(){

    deque<int> d;
    d.push_back(10);    // prints: 10
    d.push_front(20);   // prints: 20, 10

    d.emplace_back(30);     // prints: 40, 30, 20, 10, 30
    d.emplace_front(40);    // prints: 40, 30, 20, 10

    d.pop_back();   // prints: 40, 30
    d.pop_front(); // prints: 30, 40

    d.back(); // prints: 30

    d.front();  // prints: 40

    // rest of the functions are similar to vector
    // begin, end, rbegin, rend, clear, insert, size, swap...

}

int main() {


    return 0;
}