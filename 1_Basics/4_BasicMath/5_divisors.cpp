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

// to print all divisors in sorted order
int* printDivisors(int n, int &size){
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) { // i*i because it will only iterate root of n times because if a number divides something the quotient also divides it
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) divisors.push_back(n / i); // quotient also stores, making sure the quotient is not the same as divisor like for 36, 6*6 so 6 sgould be stored only 1 times...
        }
    }

    sort(divisors.begin(), divisors.end());

    // ? Update the size variable
    size = divisors.size();

    // ? Allocate an array dynamically
    int* result = new int[size];

    // ? Copy vector contents to the dynamic array
    for (int i = 0; i < size; i++) {
        result[i] = divisors[i];
    }

    return result;
}



int main() {


    return 0;
}