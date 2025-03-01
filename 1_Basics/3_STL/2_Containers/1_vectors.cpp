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
    vector<int>::reverse_iterator name3 = v.rend();     // reversing the end, just before the first element
    // v.rend() returns a reverse iterator that points to one element before the first element of the vector.
    cout << *(name3) << endl; //  points to one element before the first element. Dereferencing v.rend() is not valid (undefined behavior). In your case, it printed 0, but you shouldn’t rely on that value.
    vector<int>::reverse_iterator name4 = v.rbegin();   //  reversing the start, pointing to the first element
    // v.rbegin() returns a reverse iterator that points to the last element of the vector.
    cout << *(name4) << endl; // v.rbegin() points to the last element (which is 5). So *(v.rbegin()) gives you 5.

    for(auto rit = v.rbegin(); rit != v.rend(); ++rit) {
        cout << *rit << " "; // This will print: 5 4 3 2 1
    }
    cout << endl;

    // Accessing elements using [] and at()
    cout<< v[0] << " " << v.at(0) << endl; // This will print: 1 1 because they both are valid ways to access the first element.
    cout << "Back: " << v.back() << " " << "Front: " << v.front() << endl; // This will print: 5 1

    // Loop
    for(vector<int>::iterator it = v.begin(); it!= v.end(); ++it) {
        cout<< *it << " "; // This will print: 1 2 3 4 5
    }
    cout << endl;

    // Shortcut
    // auto keyword in C++11 and later allows us to automatically deduce the type of an iterator. no need to specify the type explicitly.?/?
    cout << "Shortter Method: ";
    for(auto it = v.begin(); it!= v.end(); ++it) {
        cout<< *it << " "; // This will print: 1 2 3 4 5
    }
    cout << endl;

    cout<< "Using Range-based for loop: ";  // This is more modern and efficient. It automatically handles iterator increment and decrements.
    for(auto it : v){
        cout<< it << " "; // This will print: 1 2 3 4 5
    }
    cout << endl;

    //erasing or deleting in a vector

    v.erase(v.begin()); // remove the first element
    cout << "After erasing the first element: ";
    for(auto it : v){
        cout<< it << " "; // This will print: 2 3 4 5
    }
    cout<< endl;

    v.erase(v.begin()+1, v.begin()+3); // remove elements from index 1 to 2 (inclusive)
    cout << "After erasing elements from index 1 to 2: ";
    for(auto it : v){
        cout<< it << " "; // This will print: 3 5
    }
    cout<< endl;

    // Insert Function

    vector<int> v5(2,100); // {100, 100}
    v5.insert(v5.begin(), 300); // insert 10 at the beginning of the vector
    cout << "After inserting 10 at the beginning: ";
    for(auto it : v5){
        cout<< it << " "; // This will print: 300 100 100
    }
    cout<< endl;
    v5.insert(v5.begin() + 1, 2, 10);     // 2  is for how many times we want to insert 10 at index 1
    cout << "After inserting 10 at index 1: ";
    for(auto it : v5){
        cout<< it << " "; // This will print: 300 10 10 100 100
    }
    cout<< endl;

    cout << v5.size() << "This is the size of the vector." << endl;

    v5.pop_back(); // remove the last element
    cout << "After popping the last element: ";
    for(auto it : v5){
        cout<< it << " "; // This will print: 300 10 10 100
    }
    cout<< endl;

    v5.swap(v); // swap v5 with v
    cout << "After swapping v5 with v: ";
    for(auto it : v){
        cout<< it << " "; // This will print: 10 10 100 100
    }
    cout<< endl;

    v5.clear(); // remove all elements from the vector
    cout << v5.empty() << endl;  // This will print: 1 (which is true, as the vector is empty now) or 0 (which is false, as the vector is not empty now)

    
}

int main(){
    vectorIterator();
    return 0;
}