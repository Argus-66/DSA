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
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return false;

        int phase=1;
        int pl = 1;
        for(int i=1;i<n;i++){
            if(phase==1){
                if(nums[i]>nums[i-1]){
                    pl++;
                }
                else if(nums[i]<nums[i-1]){
                    if(pl<2)return false;
                    phase =2;
                    pl=2;
                } else{
                    return false;
                }
            }
            else if(phase==2){
                if(nums[i]<nums[i-1]){
                    pl++;
                }
                else if(nums[i]>nums[i-1]){
                    if(pl<2)return false;
                    phase=3;
                    pl=2;
                }
                else{
                    return false;
                }
            }
            else{
                if(nums[i]>nums[i-1]){
                    pl++;
                }
                else{
                    return false;
                }
            }
        }
        return phase ==3 && pl >= 2;
    }
};

int main() {
    
    return 0;
}