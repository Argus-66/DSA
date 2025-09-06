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
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n) k=k%n;

//[1,2,3,4,5,6,7], k=3

        reverse(nums.begin(), nums.end());  //Reverse whole → [7,6,5,4,3,2,1]
        reverse(nums.begin(), nums.begin()+k);//Reverse first 3 → [5,6,7,4,3,2,1]
        reverse(nums.begin()+k, nums.end());//Reverse last 4 → [5,6,7,1,2,3,4]
    }
};

int main() {
    
    return 0;
}