#include <bits/stdc++.h>
using namespace std;

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
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        long long sum =0;

        for(int x:nums)sum+=x;

        int great= max(1LL, (sum/n)+1);

        unordered_set<int>present;
        for(int x:nums){
            if(x>0) present.insert(x);
        }
        while(present.count(great)){
            great++;
        }
        return great;
    }
};

int main() {
    
    return 0;
}