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
*   54. Spiral Matrix
*   Input:  matrix = [[1,2,3],[4,5,6],[7,8,9]]
~       Initial matrix:
~           1 2 3
~           4 5 6
~           7 8 9

?   Output: [1,2,3,6,9,8,7,4,5]

*   Approach:
*       1. Use four pointers: top, bottom, left, right to define the current boundaries of the matrix.
*       2. Traverse from left to right along the top row, then increment top.
*       3. Traverse from top to bottom along the right column, then decrement right.
*       4. Traverse from right to left along the bottom row (if top <= bottom), then decrement bottom.
*       5. Traverse from bottom to top along the left column (if left <= right), then increment left.
*       6. Repeat steps 2-5 until all elements are traversed.

!   Working Example:
*       Initial matrix:
*           1 2 3
*           4 5 6
*           7 8 9
*
*       Step 1: top row (left to right)
*           - Add 1, 2, 3
*           - top = 1
*
*       Step 2: right column (top to bottom)
*           - Add 6, 9
*           - right = 1
*
*       Step 3: bottom row (right to left)
*           - Add 8, 7
*           - bottom = 1
*
*       Step 4: left column (bottom to top)
*           - Add 4
*           - left = 1
*
*       Step 5: top row (left to right, remaining middle)
*           - Add 5
*           - top = 2

?       All elements traversed. Final output: [1,2,3,6,9,8,7,4,5]

*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, left = 0;
        int right = m - 1, bot = n - 1;

        vector<int> ans;

        while (left <= right && top <= bot) {
            // top row
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // right row
            for (int i = top; i <= bot; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // bottom row
            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }

            // left row
            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main() {
    
    return 0;
}