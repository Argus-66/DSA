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

// Array size cannot be changed once it is declared.
// Thats why we use Vector in C++.
// Vector is dynamic array and can be resized at runtime.

void explainVector(){

    vector<int> v; // { }   // Initialize an empty vector

    v.push_back(1);    // {1} // Add element at the end
    v.emplace_back(2); // {1, 2} // Add element at the end using emplace_back
    // emplace_back() is faster than push_back() for small vectors.

    vector<pair<int, int>> vp; // { }   // Initialize an empty vector of pairs

    vp.push_back({1, 2});  // {{1, 2}} // Add element at the end
    vp.emplace_back(3, 4); // {{1, 2}, {3, 4}} // Add element at the end using emplace_back

    vector<int> v4(5, 100); // {100, 100, 100, 100, 100} // Initialize with 5 elements with value 100

    vector<int> v1(5); // {0, 0, 0, 0, 0} // Initialize with 5 elements with value 0

    vector<int> v2(5, 20); // {20, 20, 20, 20, 20} // Initialize with 5 elements with value 20
    vector<int> v3(v2);    // {20, 20, 20, 20, 20} // Initialize with another vector
}

void vectorIterator(){
    // Vector Iterator
    vector<int> v = {1, 2, 3, 4, 5}; // {1, 2, 3, 4, 5}

    // Iterating over vector using Itera

    vector<int>::iterator name = v.begin(); // The :: is important here, unlice having std defined in the beginning of the code.
    // Iterator points to the memory address of the first element in the vector.
    // it points to the memory not the element itself.
    // v.begin() is a function that returns an iterator pointing to the first element of the vector.
    // to access the element, we use * operator.
    cout << *(name) << endl; // Output: 1
    name++; // Increment the iterator to point to the second element.
    cout << *(name) << endl; // Output: 2
    name += 2; // Increment the iterator to point to the third element.
    cout << *(name) << endl; // Output: 4

    // Iterating over vector using Range-based for loop
    // {1, 2, 3, 4, 5}
    vector<int>::iterator name2 = v.end(); //it doesnt point to the last element (5 here), it points to one position after the last element.
    name2--; // Decrement the iterator to point to the last element.
    cout << *(name2) << endl; // Output: 5


    // NEVER USED BUT GOOD TO KNOE
    vector<int>::reverse_iterator name3 = v.rend();     //
    vector<int>::reverse_iterator name4 = v.rbegin();   //
}

int main(){
    vectorIterator();
    return 0;
}