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
void palindrome(string a){
    int n = a.length();
    int flag = 0;
    for (int i = 0; i < n / 2; i++) {
        if (a[i]!= a[n-i-1]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}   





int main() {
    string s;
    cin >> s;
    palindrome(s);  // Function to check if the string is a palindrome

    return 0;
}