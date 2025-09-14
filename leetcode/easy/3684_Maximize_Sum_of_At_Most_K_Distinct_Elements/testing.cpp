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
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> dis(st.begin(),st.end());
        sort(dis.begin(), dis.end(), greater<int>());

        if ((int)dis.size() > k) {
        dis.resize(k);
    }
    return dis;
    }
};

int main() {
    
    return 0;
}