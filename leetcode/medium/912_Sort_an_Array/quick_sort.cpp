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
    int partition(vector<int>&arr, int low, int high){
        int pivot = arr[low];
        int i=low;
        int j = high;

        while(i<j){
            while(arr[i]<= pivot && i<=high-1){
                i++;
            }

            while(arr[j]> pivot && j>=low+1){
                j--;
            }

            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void qs(vector<int>&arr, int low, int high){
        if(low < high){
            int pIndex = partition(arr,low,high);
            qs(arr, low, pIndex - 1);
            qs(arr, pIndex + 1, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size()-1);
        return nums;
    }
};



int main() {
    
    return 0;
}