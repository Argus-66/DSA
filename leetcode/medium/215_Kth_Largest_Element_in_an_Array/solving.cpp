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
#define map                      map<ll,ll>
#define mod                      1000000007

/*
*  This code finds the Kth largest element in an array using a min-heap.

*   So what we do is, we enter the numbers in a min-heap(heap generally is  greater on top, but min-heap is smaller on top)
*   then when a numbe is entered we check if the size of the heap is greater than k, if it is then we pop the top element
*   and finally we return the top element of the heap which is the Kth largest element

?   Time Complexity: O(n log k) where n is the number of elements in the array and k is the size of the heap.
?   Space Complexity: O(k) for the min-heap.
?   This is efficient for large arrays and small k values.
?   This code is efficient and works well for the problem statement.
*/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num); // insert numbers
            if (minHeap.size() > k) { // if insertedis moe thann k
                minHeap.pop(); // remove the smalest one in top
            } // so only k numbers remain in the heap
        }
        return minHeap.top(); // top is the kth largest element
    }
};




int main() {
    
    return 0;
}