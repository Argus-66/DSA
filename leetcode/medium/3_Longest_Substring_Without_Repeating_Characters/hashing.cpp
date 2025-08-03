#include <bits/stdc++.h>
using namespace std;

#define ll long long int
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

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++){
            char c = s[i];
            freq[c]++;
            if (freq[c] > 1){
                return i - 1;
            }
        }
        return s.length();
    }
};

int main()
{

    return 0;
}