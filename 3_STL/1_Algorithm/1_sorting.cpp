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

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.first > p2.first) return true;
    return false;
}

void explainSorting() {
    int a1[] = {5, 2, 8, 1, 3};  // Unsorted array
    int n = sizeof(a1) / sizeof(a1[0]);  // Get the size of the array

    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;

    // Sorting the array in ascending order
    sort(a1, a1 + n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;


    // In Vector
    vector<int> v = {5, 2, 8, 1, 3};
    cout << "Size of vector: " << v.size() << endl;


    cout << "Before sorting: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting the vector in ascending order
    sort(v.begin(), v.end());

    cout << "After sorting: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Sorting the vector in descending order
    sort(v.begin(), v.end(), greater<int>());

    cout << "After sorting (descending order): ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;


    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    int n1 = sizeof(a) / sizeof(a[0]);
    // sort it according to second element
    // if second element is same, then sort it according to first element but in descending
    sort(a, a+n1, comp);

    // Printing the sorted array
    cout << "Sorted Pairs: ";
    for (auto p : a) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;


    int num1= 7;
    int cnt = __builtin_popcount(num1); // returns the number of set bits
    cout << "Number of set bits: " << cnt << endl;

    string s = "123";
    // sort it according to first elementn
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

}




int main() {
    explainSorting();

    return 0;
}