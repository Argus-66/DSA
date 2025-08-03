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


*   Doesnt work for edge cases where the third value comesas -2147483648


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int largest=LONG_MIN;
        int slargest=LONG_MIN;
        int tlargest=LONG_MIN;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == largest || nums[i] == slargest || nums[i] == tlargest) continue;

            if(nums[i]>largest){
                tlargest=slargest;
                slargest=largest;
                largest=nums[i];
                count++;
            } else if(nums[i]>slargest){
                tlargest=slargest;
                slargest=nums[i];
                count++;
            } else if(nums[i]>tlargest){
                tlargest=nums[i];
                count++;
            }
        }
        return count >= 3 ? tlargest : largest;
    }
};

*/


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

        for (int num : nums) {
            if (num == first || num == second || num == third) continue;

            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }

        return third == LONG_MIN ? first : (int)third;
    }
};


int main() {
    
    return 0;
}