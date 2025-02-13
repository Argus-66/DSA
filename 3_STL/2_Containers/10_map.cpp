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
#define mod                      1000000007

//  MAP functions
//  Keys and values
//  keys are unique, values can be anything 
//  



void explainMap(){
    map<int, int>mpp;   // remove the macro in the above code snippet
    mpp[1] = 10;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[4] = 10;

    // Unique keys are in sorted order always
    for(auto it: mpp){
        cout << it.first << " " << it.second << endl;  // Output: 1 10 2 4 3 1
    }

    cout<< mpp[1]<<endl;
    cout<< mpp[4]<<endl;

    auto it1 = mpp.find(3);
    cout<<it1->second<< endl;

    //lower bound
    auto it2 = mpp.lower_bound(2);
    cout<<it2->first<<" "<<it2->second<<endl;

    //upper bound
    auto it3 = mpp.upper_bound(3);
    cout<<it3->first<<" "<<it3->second<<endl;

    // erase, swap, size, empty, are same
}

int main() {
    explainMap();

    return 0;
}