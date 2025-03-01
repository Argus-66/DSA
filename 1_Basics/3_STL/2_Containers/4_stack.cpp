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

//  Stack
//  Stack is a linear data structure that follows the Last In First Out (LIFO) principle
//  LAST IN FIRST OUT (LIFO)
//  INDEXING IS NOT ALLOWED IN STACK
//  PUSH : Adds an element to the top of the stack
//  POP : Removes an element from the top of the stack
//  TOP : Returns the top element of the stack without removing it
//  EMPTY : Returns true if the stack is empty, false otherwise
//  SIZE : Returns the number of elements in the stack
//  FRONT : Returns the top element of the stack without removing it
//  BACK : Returns the last element of the stack without removing it
//  SWAP : Swaps the contents of two stacks


void explainStack(){
    stack<int> st;
    st.push(1);    // 1
    st.push(2);    // 1, 2
    st.push(3);    // 1, 2, 3
    st.push(4);    // 1, 2, 3, 4


// what it looks like
// *         *
// *    4    *
// *    3    *
// *    2    *
// *    1    *
// ***********

    cout << st.top() << endl; // 4

    st.pop();    // 1, 2, 3
    cout << st.top() << endl; // 3

    cout << st.size() << endl; // 3
    cout << st.empty() << endl; // 0 // this means stack is not empty 1 if empty

}


int main() {
    explainStack();

    return 0;
}