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
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && el2 != nums[i]){
                cnt1=1;
                el1=nums[i];
            }
            else if(cnt2==0 && el1 !=nums[i]){
                cnt2=1;
                el2=nums[i];
            }

            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;

            else{
                cnt1--;cnt2--;
            }
        }

        vector<int>ans;
        cnt1=0; cnt2=0;

        for(int i=0;i<nums.size();i++){
            if(el1 ==nums[i]) cnt1++;
            if(el2==nums[i]) cnt2++;
        }
        int mini = (int)(nums.size()/3)+1;
        if(cnt1>=mini) ans.push_back(el1);
        if(cnt2>=mini) ans.push_back(el2);

        return ans;
    }
};

int main() {
    
    return 0;
}