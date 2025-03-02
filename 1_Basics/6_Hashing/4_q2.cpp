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
        int maxFrequency(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            long long left=0, total=0, mfreq=0;

            for(long long right=0; right < nums.size(); right++){
                if (right > 0) {
                    total += (long long)(nums[right] - nums[right - 1]) * (right - left);
                }
                
                while(total > k){
                    total -= nums[right] - nums[left];
                    left++;
                }

                mfreq = max(mfreq, right-left+1);
            }
            return mfreq;
        }
    };





int main() {


    return 0;
}






