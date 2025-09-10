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
*   In this we also need to provide the starting and ending index of the subarray

*/
class Solution {
public:
    tuple<int,int,int> maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum =0;
        int start=0, end=0, ansStart=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(sum==0) start=i;

            sum +=nums[i];

            if(sum>maxi){
                maxi = sum;
                end = i;
                ansStart = start;
            }
            if(sum<0){
                sum=0;
            }
        }
        return {maxi, ansStart, end};
    }
};

int main() {
    // predefined array
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution sol;
    auto [maxSum, start, end] = sol.maxSubArray(nums);

    cout << "Maximum subarray sum = " << maxSum << endl;
    cout << "Start index = " << start << ", End index = " << end << endl;

    return 0;
}