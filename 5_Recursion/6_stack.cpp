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

void insertAtBottom(stack<int> &stack, int val) {
    if (stack.empty()) {
        stack.push(val);
        return;
    }

    int top = stack.top();
    stack.pop();
    insertAtBottom(stack, val); 
    stack.push(top);  // Push the popped elements back
}

// Function to reverse the stack using recursion
void reverseStack(stack<int> &stack) {
    if (stack.empty()) return;  // Base case: Stop when the stack is empty

    int top = stack.top();
    stack.pop();
    reverseStack(stack);  // Recursive call to pop all elements
    insertAtBottom(stack, top);  // Insert each popped element at the bottom
}

// Utility function to print the stack (for testing)
void printStack(stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
}


int main() {
    stack<int> st;
    int n, x;
    cin >> n;  // Number of elements

    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }

    reverseStack(st);
    printStack(st);  // Printing the reversed stack

    return 0;
}











/*
    Time Complexity: O(N^2)
    Space Complexity: O(N)

    where 'N' is the total number of elements in the given stack.
*/


// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int> &stack, int ele) {
    if (stack.empty()) {
        // If the stack is empty, simply push the element
        stack.push(ele);
        return;
    }

    // If the stack is not empty, remove the top element
    int top = stack.top();
    stack.pop();

    // Recursively call insertAtBottom to insert the element at the bottom
    insertAtBottom(stack, ele);

    // Push the removed top element back onto the stack
    stack.push(top);
}

// Function to reverse the elements of the stack
void reverseStack(stack<int> &stack) {
    if (stack.empty()) {
        // Base case: If the stack is empty, no elements to reverse
        return;
    }

    // If the stack is not empty, remove the top element
    int top = stack.top();
    stack.pop();

    // Recursively call reverseStack to reverse the remaining elements
    reverseStack(stack);

    // After reversing the remaining elements, insert the removed top element at the bottom
    insertAtBottom(stack, top);
}
