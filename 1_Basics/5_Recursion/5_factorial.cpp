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

void factorial(int n){
    int fact = 1;
    int i=1;

    while(fact<=n){
        cout << fact << " ";
        i++;
        fact *= i;
    }
}

class Solution {
    public:
        vector<long long> factorialNumbers(long long n) {
            vector<long long> factorials;
            long long fact = 1, i = 1;
          
            while (fact <= n) {
                factorials.push_back(fact);
                i++;
                if (fact > n / i) break; 
                fact *= i;
            }
            return factorials;
        }
};

int main() {


    return 0;
}