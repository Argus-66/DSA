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
*   Brute Force Approach
~   Time Complexity: O(nlogn)   Worse for time
~   Space Complexity: O(1)      Best for Saving Space
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i+=2){
            if(i==n-1 || nums[i]!=nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    
    return 0;
}