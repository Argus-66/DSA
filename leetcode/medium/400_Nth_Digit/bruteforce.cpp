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

// *    only does till 1000

class Solution {
public:
    int findNthDigit(int n) {
        if(n<=9){
            return n;
        } 
        
        else if(n>9 && n<=189){
            n-=9;
            int num = 10 + (n-1)/2;
            if(n%2==0){
                return (num%10);
            } else {
                return (num/10);
            }
        } 
        
        else if(n>189 && n<=2889){
            n-=189;
            int num = 100 + (n-1)/3;
            if(n%3==0){
                return (num%10);
            } else if(n%3==1){
                return (num/100);
            } else {
                return (num/10)%10;
            }
        } 
        
        else {
            n-=2889;
            int num = 1000 + (n-1)/4;
            if(n%4==0){
                return (num%10);
            } else if(n%4==1){
                return (num/1000);
            } else if(n%4==2){
                return (num/100)%10;
            } else {
                return (num/10)%10;
            }
        }
    }
};



int main() {
    
    return 0;
}