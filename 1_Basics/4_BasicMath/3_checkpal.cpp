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


void Solution(int x){
    int revNum = 0;
    int dup = x;
    while(x>0){
        int ld = x%10;
        revNum = (revNum*10)+ld;
        x=x/10;
    }
    if(dup==revNum) cout << "true";
    else cout << "false";
}


// Better Method!!!
class boolSolution{
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        return s == string(s.rbegin(), s.rend()); // ✅ Just returns true or false
    }
};

int main() {
    int s; cin>>s;
    Solution (s);

    return 0;
}