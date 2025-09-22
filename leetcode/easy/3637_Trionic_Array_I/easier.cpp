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
        int p = 0, q = 0;
        int n=nums.size();

        for(int i=1;i<n-1;i++){
            if(nums[i-1]>=nums[i]){
                p = i-1;
                break;
            }
        }
        if(p==0) return false;

        // cout<<"p: "<<p<<"\n";
        for(int i=p+1;i<n;i++){
            if(nums[i-1]<=nums[i]){
                q = i-1;
                break;
            }
        }

        if(q==0) return false;

        // cout<<"q: "<<q<<"\n";
        for(int i=q+1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                return false;
            }
        }

        return true;
    }
};

int main() {
    
    return 0;
}