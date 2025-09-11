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
*   This approach doesnt work in cases like [2,4,1]
*   because 2->4 is 2 profit
*   but
*   because of 1 in the last it sets minimum number possible to 1
*   and there is nothing aftr so 0 profit...

*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int buy=prices[0];int sell=0;
        for(int i=0;i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
                sell=0;
            }
            if(sell<prices[i]){
                sell=prices[i];
            }
        }
        int profit = sell-buy;
        if(profit<0) profit=0;
        return profit;
    }
};

int main() {
    
    return 0;
}