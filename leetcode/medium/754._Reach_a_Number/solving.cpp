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

*   sum=1+2+3+...+k= k(k+1)/2

*   Start from 0, and at each step take the next natural number (1, 2, 3, ...), always adding it to your total.

*   Keep stepping forward until your total becomes equal to or greater than the target.

*   Once you’re past the target, check if the extra distance (sum - target) can be corrected by flipping directions.

*   You can only correct even differences (because flipping a step changes position by an even number).

*   So, stop as soon as:
*       You've gone far enough (sum ≥ target)
*       And the overshoot (sum - target) is even — meaning you can flip some steps to land exactly on target.

*   The number of steps you’ve taken at that point is your answer.




*/
class Solution {
public:
    int reachNumber(int target) {
        int p=abs(target); // + or - doesnt matter, will take same number of steps to reach either

        int steps=0,t=0;

        while (true){
            steps++;        // take the next step (1,2,3,...)
            t+=steps;       // keep track of total distance moved

            // check if we can reach target by flipping some steps
            if (t >= p && (t - p) % 2 == 0) {
                return steps;   // found the minimum number of steps
            }
        }
    }
};

int main() {
    
    return 0;
}