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

For alphabest is hashing we use ASCII values
like a is 97
and z is 122

so for storing we can use character -a
which would be for a: 0
till
z: 25

*/



int main() {
    string s; 
    cin >> s;


    // Pre Computation
    // use 256 if u just want to use all the characters
    int hash[26] = {0};
    for( int i=0; i<s.size(); i++ ){
        hash[s[i]-'a']++;
    }


    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;

        // for 256 characters u wont need -'a'
        cout << hash[c-'a'] << endl;
    }

    return 0;
}