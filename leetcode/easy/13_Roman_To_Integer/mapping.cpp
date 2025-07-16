#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define test  \
    ll t;     \
    cin >> t; \
    while (t--)
#define ld long double
#define tolower(s1) transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1) transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define PI 3.1415926535897932384626433832795l
#define fori(n) for (int i = 0; i < n; i++) // fori(n) {}
#define forj(n) for (int j = 0; j < n; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define pb push_back
#define set set<ll>
#define map map<ll, ll>
#define mod 1000000007

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]])
            {
                total -= roman[s[i]];
            }
            else
            {
                total += roman[s[i]];
            }
        }

        return total;
    }
};


int main()
{

    return 0;
}