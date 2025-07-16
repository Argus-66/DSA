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
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq1,freq2;
        for(char ch : s){
            freq1[ch]++;
        }
        for(char ch : t){
            freq2[ch]++;
        }

        for(auto& pair : freq1){
            char key = pair.first;
            int value = pair.second;

            if (freq2[key] != value) {
                return false;
            }
        }
        if (freq1.size() != freq2.size()) {
            return false;
        }
        return true;
    }
};





int main() {
    
    return 0;
}