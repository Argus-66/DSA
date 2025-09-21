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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1;j<n;j++){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;

                int k= j+1;
                int l= n-1;

                while(k<l){
                    long long sum= nums[i];
                    sum+= nums[j];
                    sum+= nums[k];
                    sum+= nums[l];

                    if(sum==target){
                        vector<int>temp = { nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++; l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                    else if(sum<target) k++;
                    else l--;
                    
                }
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}