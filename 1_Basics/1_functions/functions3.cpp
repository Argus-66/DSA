#include <bits/stdc++.h>
using namespace std;

#define ll                       long long int
#define test                     ll t; cin>>t; while(t--)
#define ld                       long double
#define tolower(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define PI                       3.1415926535897932384626433832795l
#define fori(n) for (int i = 0; i < n; i++)     //fori(n) {}
#define forj(n) for (int j = 0; j < n-1; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define pb                       push_back
#define set                      set<ll>
#define map                      map<ll,ll>
#define mod                      1000000007

// Pass by reference aka using for & to save the value to original (main)

void doSomething(string &a) {
    a[0] = 't';
    cout << a<< endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s = "raj";
    doSomething(s);
    cout << s << endl;

    return 0;
}