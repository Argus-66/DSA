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
* What we are doing is that, we are calculating the sum of first n natural numbers using the formula n*(n+1)/2
* Then we are calculating the sum of the elements in the array.
* The difference between the two sums will give us the missing number.
* This approach has a time complexity of O(n) and a space complexity of O(1

*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n*(n+1)/2;
        int sum =0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return total - sum;
    }
};

int main() {
    
    return 0;
}