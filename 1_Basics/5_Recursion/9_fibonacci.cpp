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

class Solution {
    public:
        int fib(int n) {
            if(n<=1) return n;

            int last = fib(n-1);
            int slast = fib(n-2);

            return last+ slast;
        }
    };


int main() {
    Solution s;
    int n;
    cin >> n;
    cout << s.fib(n) << endl;

    return 0;


}




// for long numbers

unordered_map<int, ll> dp;

int fibonacciNumber(int n){
    if (n <= 1) return n;  // Base case

    // If already computed, return stored value
    if (dp.find(n) != dp.end()) return dp[n];

    // Recursive call with memoization
    return dp[n] = (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % mod;
}









// Best way is Matrix Exponentiation... Havent learnt this yet................................................................

void multiply(ll F[2][2], ll M[2][2]) {
    ll x = (F[0][0] * M[0][0] % mod + F[0][1] * M[1][0] % mod) % mod;
    ll y = (F[0][0] * M[0][1] % mod + F[0][1] * M[1][1] % mod) % mod;
    ll z = (F[1][0] * M[0][0] % mod + F[1][1] * M[1][0] % mod) % mod;
    ll w = (F[1][0] * M[0][1] % mod + F[1][1] * M[1][1] % mod) % mod;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

// Matrix Exponentiation
void power(ll F[2][2], ll n) {
    if (n == 0 || n == 1)
        return;

    ll M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2)
        multiply(F, M);
}

// Fibonacci using Matrix Exponentiation
int fibonacciNumber(int n) {
    if (n <= 1)
        return n;

    ll F[2][2] = {{1, 1}, {1, 0}};
    power(F, n - 1);

    return F[0][0];  // Fn is stored in F[0][0]
}