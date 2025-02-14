#include <bits/stdc++.h>
using namespace std;

#define ll                       long long int
#define test                     ll t; cin>>t; while(t--)
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

void reverseNumber(int x){
    int rev  = 0;
    while(x != 0){
        int ld = x%10;
        //if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0;
// commented cuz shows error rn
        rev = (rev *10)+ld;
        x = x/10;
    }
    cout<<rev;
}


int main() {
    int n; cin>>n;
    reverseNumber(n);

    return 0;
}