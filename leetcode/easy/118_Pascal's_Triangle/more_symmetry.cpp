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
    vector<int> generateRow(int rowIndex) {
        vector<long long> ansRow(rowIndex + 1);
        ansRow[0] = 1;                 // first element
        ansRow[rowIndex] = 1;          // last element

        long long val = 1;
        // Fill middle elements
        for (int col = 1; col < rowIndex; col++) {
            val = val * (rowIndex - col + 1) / col;
            ansRow[col] = val;
        }

        return vector<int>(ansRow.begin(), ansRow.end());
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row = 0; row < numRows; row++) {
            ans.push_back(generateRow(row));
        }
        return ans;
    }
};




int main() {
    
    return 0;
}