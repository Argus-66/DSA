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
    string frequencySort(string s) {
        unordered_map<char,int>hashing;

        for(char c:s){
            hashing[c]++;
        }

        vector<pair<char, int>> freq(hashing.begin(), hashing.end());
        sort(freq.begin(), freq.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        string result = "";

        for (auto &p : freq) {
            result += string(p.second, p.first);
        }
        return result;
    }
};



int main() {
    
    return 0;
}