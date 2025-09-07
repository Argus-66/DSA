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
*   a=[1,1,2,2,3,4]
*   b=[2,3,4,4,5,6]

*   ans=[1,2,3,4,5,6]


*/

vector <int> sortedArray(vector<int>a,vector<int>b){
    int n1 = a.size();
    int n2 = b.size();

    int i =0, j=0;
    vector<int> ans;

    while (i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(ans.size()==0 || ans.back()!=a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
        else{
            if(ans.size()==0 || ans.back()!=b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++;
    }
    
}


int main() {
    
    return 0;
}