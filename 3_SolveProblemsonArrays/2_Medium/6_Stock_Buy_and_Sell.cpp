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

*   prices = [7, 1, 5, 3, 6, 4]
*   Start: mini = 7, profit = 0
*   Day 0: price=7 → cost=0, profit=0, mini=7
*   Day 1: price=1 → cost=-6, profit=0, mini=1
*   Day 2: price=5 → cost=4, profit=4, mini=1
*   Day 3: price=3 → cost=2, profit=4, mini=1
*   Day 4: price=6 → cost=5, profit=5, mini=1
*   Day 5: price=4 → cost=3, profit=5, mini=1
*   Answer = 5 (buy at 1, sell at 6).


*   prices = [2, 4, 1]
*   Start: mini = 2, profit = 0
*   Day 0: price=2 → cost=0, profit=0, mini=2
*   Day 1: price=4 → cost=2, profit=2, mini=2
*   Day 2: price=1 → cost=-1, profit=2, mini=1
*   Answer = 2 (buy at 2, sell at 4).

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  mini = prices[0];
        int profit =0;
        int n=prices.size();

        for(int i=0; i<n;i++){
            int cost =prices[i]-mini;  // profit if we sell today
            profit = max(profit,cost);  // update max profit

            mini = min(mini, prices[i]);  // update lowest price so far
        }
        return profit;
    }
};

int main() {
    
    return 0;
}