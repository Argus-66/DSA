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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hashing;

        for(int i=0; i< nums.size();i++){
            if(hashing.find(nums[i]) != hashing.end()){
                return true;
            }
            hashing[nums[i]] = i;
        }
        return false;
    }
};




int main() {
    
    return 0;
}