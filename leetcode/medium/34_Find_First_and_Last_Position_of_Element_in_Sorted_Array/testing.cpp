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

    int findFirst(vector<int>&nums,int target){
        int l=0;int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int m =l+(r-l)/2;

            if(nums[m]==target){
                ans=m;
                r=m-1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return ans;
    }

    int findLast(vector<int>&nums,int target){
        int l=0;int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int m =l+(r-l)/2;

            if(nums[m]==target){
                ans=m;
                l=m+1;
            }
            else if(nums[m]<target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int f=findFirst(nums,target);
        if(f==-1)return {-1,-1};

        int l=findLast(nums,target);
        return{f,l};
    }
};

int main() {
    
    return 0;
}