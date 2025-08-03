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
* BETTER!!!!!!!!!!! for this case atleast
*/

class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high){
        vector<int> temp;
        int left = low, right = mid + 1;

        while(left <= mid && right <= high){
            if(arr[left] < arr[right]){
                temp.push_back(arr[left++]);
            } else {
                temp.push_back(arr[right++]);
            }
        }

        while(left <= mid){
            temp.push_back(arr[left++]);
        }

        while(right <= high){
            temp.push_back(arr[right++]);
        }

        for(int i = low; i <= high; ++i){
            arr[i] = temp[i - low];
        }
    }

    void mS(vector<int> &arr, int low, int high){
        if(low >= high) return;
        int mid = (low + high) / 2;
        mS(arr, low, mid);
        mS(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mS(nums, 0, nums.size() - 1);
        return nums;
    }
};


int main() {
    
    return 0;
}