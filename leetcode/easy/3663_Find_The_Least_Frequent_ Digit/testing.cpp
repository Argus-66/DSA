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
    int getLeastFrequentDigit(int n) {
        int num[10]={0};

        while(n>0){
            int digit=n%10;
            num[digit]++;
            n/=10;
        }
        int mf = INT_MAX;
        int ans=-1;
        for(int i=0;i<=9;i++){
            if(num[i]>0 && num[i]<mf){
                mf=num[i];
                ans=i;
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}