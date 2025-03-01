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
#define map                      map<ll,ll>
#define mod                      1000000007

//  Set 
// UNIQUE AND SORTED
//  Set is an unordered collection of unique elements.
//  SET supports the following operations:
//  - Insertion: O(log n)
//  - Deletion: O(log n)
//  - Search: O(log n)
//  - Union: O(n)
//  - Intersection: O(n)
//  - Difference: O(n)
//  - Size: O(1)
//  - Clear: O(1)
//  - Empty: O(1)
//  - Find: O(log n)
//  - Erase: O(log n)
//  - Lower Bound: O(log n)
//  - Upper Bound: O(log n)
//  - Count: O(log n)
//  - Swap: O(1)
//  - Merge: O(n log n)

//

void explainSet(){
    set<int> st;    // remove the macro i have defined in the code
    st.insert(1);
    st.insert(2);
    st.insert(2);   // Duplicate, ignored
    st.insert(4);
    st.insert(3);

    // Printing elements using a range-based for loop
    for (int i : st) {
        cout << i << " ";  // Output: 1 2 3 4
    }
    cout << endl;

    auto it = st.find(3);
    if (it == st.end()) {
        cout << "Element not found" << endl;
    } else {
        cout << "Found " << *it << endl;
    }

    st.erase(3);
    cout << "After erasing 3: ";
    for (int i : st) {
        cout << i << " ";  // Output: 1 2 4
    }
    cout << endl;

    int cnt = st.count(2);  // Returns the number of occurrences of the element, 1 if it exists, otherwise 0
    cout << "Number of occurrences of 2: " << cnt << endl;

    // most takes log n complexity
    
}

int main() {
    explainSet();

    return 0;
}