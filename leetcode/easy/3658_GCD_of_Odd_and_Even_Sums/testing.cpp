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
*   The first n odd numbers sum to n * n

*   First n even numbers sum to n * (n + 1)

*   gcd(n, n + 1) = 1, so the answer is n ( so can just return n...)
*/
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int o = n*n;
        int e= n*(n+1);
        int ans =gcd(o,e);
        return ans;
    }
};
int main() {
    
    return 0;
}