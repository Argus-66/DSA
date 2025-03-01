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
// *             * 
// * *         * * 
// * * *     * * * 
// * * * * * * * * 
// * * *     * * * 
// * *         * * 
// *             * 

void pattern(int n){
    int gap =(2*n-2)*2;
    int star = 1;

    for(int i = n+1; i <= 2*n; i++){
        //star
        for(int j = 1; j <= star; j++){
            cout << "* ";
        }
        //space
        for(int j = 0; j<gap ; j++){
            cout<< " ";
        }
        //star
        for(int j = 1; j <= star; j++){
            cout << "* ";
        }
        star++;
        cout << endl;
        gap -= 4;
    }
    int space = 4;
    for(int i = 1; i <= n-1; i++){
        
        //star
        for(int j = 1; j <= n-i; j++){
            cout << "* ";
        }
        //space
        for(int j = 1; j<=space ; j++){
            cout<< " ";
        }
        //star
        for(int j = 1; j <= n-i; j++){
            cout << "* ";
        }
        cout << endl;
        space += 4;
    }
    
}

int main() {
    int n; cin>>n;
    pattern(n);

    return 0;
}