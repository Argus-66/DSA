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
*   Input:  matrix = [[1,1,1],[1,0,1],[1,1,1]]
*   Output: [[1,0,1],[0,0,0],[1,0,1]]
*
*   Approach:
*   1. Use the first row and first column as markers to indicate which rows and columns should be zeroed.
*   2. Traverse the matrix, and for every zero found, mark its row and column in the first row/column.
*   3. Traverse the matrix again (excluding first row/column), and set elements to zero if their row or column is marked.
*   4. Finally, update the first row and first column if needed.
*
*   Working Example:
*   Initial matrix:
*           1 1 1
*           1 0 1
*           1 1 1
*
*   Step 1: Mark rows and columns
*   - Find 0 at (1,1), mark matrix[1][0] = 0 and matrix[0][1] = 0
*   - Markers after step 1:
*           1 0 1
*           0 0 1
*           1 1 1
*
*   Step 2: Set zeroes based on markers (excluding first row/col)
*   - matrix[1][2] set to 0 (row 1 marked)
*   - matrix[2][1] set to 0 (col 1 marked)
*   - matrix[2][0] remains 1 (row 2 not marked)
*   - matrix[2][2] remains 1 (row 2 and col 2 not marked)
*
*   Matrix after step 2:
*           1 0 1
*           0 0 0
*           1 0 1
*
*   Step 3: Update first row/col if needed
*   - First row and first column do not need to be zeroed in this example.
*
*   Final matrix:
*           1 0 1
*           0 0 0
*           1 0 1
*/

class Solution{
public:
    void setZeroes(vector<vector<int>> &matrix){
        // int row[n] = {0}; --> matrix[..][0]
        // int col[m] = {0}; --> matrix[0][..]
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // step 1: Traverse the matrix and
        // mark 1st row & col accordingly:

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (matrix[i][j] == 0){
                    // mark i-th row:
                    matrix[i][0] = 0;

                    // mark j-th column:
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
        for (int i = 1; i < n; i++){
            for (int j = 1; j < m; j++){
                if (matrix[i][j] != 0){
                    // check for col & row:
                    if (matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // step 3: Finally mark the 1st col & then 1st row:
        if (matrix[0][0] == 0){
            for (int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0){
            for (int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};

int main()
{

    return 0;
}