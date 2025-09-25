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
*   Use two pointers:
^       i -> scans every element
^       k -> position to write next valid (non-val) element

*   For each element nums[i]:
^       If nums[i] != val:
^           nums[k] = nums[i]   // overwrite
^           k++                 // move write pointer
^       Else:
^           skip it

*   After loop:
^       k = count of non-val elements (new length)
^       First k elements in nums are the result
^       Elements beyond k don’t matter

*   Side note:
~       Don’t actually need to delete the extra elements.
~       They just want:
~           - The new length (k)
~           - The first k elements of nums without val
~           - What comes after k doesn’t matter 
~             (can be garbage, old values, duplicates, etc.)

*   Return k
*/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

int main() {
    
    return 0;
}