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

// function types:
// void, return, parametered, non-parametered

// void doesnt retturn, it just does something or has to be called

void hello(){
    cout<<"hello! ";
}

// parameterized function, takes an argument
void printName(string a){
    cout << a << " good evening!" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << "whats your name?" << endl;
    string name;
    cin >> name;

    // void function call
    hello();
    printName(name);

    // reusing of the function
    cout << "friend's name?" << endl;
    string name2;
    cin >> name2;

    hello();
    printName(name2);
    return 0;
}