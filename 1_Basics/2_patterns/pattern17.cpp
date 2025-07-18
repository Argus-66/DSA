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

// pattern
//       A       
//     A B A     
//   A B C B A   
// A B C D C B A 

void pattern(int n){
    for(int i = 1; i <= n; i++){
        //space
        for(int j =1; j <= (n - i); j++){
            cout << "  ";
        }
        
        //alphabet
        char ch = 'A';
        int breakpoint = (2*i-1)/2;

        for(int j=1; j<=2*i-1; j++){
            cout << ch << " ";
            if(j<= breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j =1; j <= (n - i); j++){
            cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int n; cin>>n;
    pattern(n);

    return 0;
}