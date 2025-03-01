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

// Priority Queue Container
//  NOTE: Priority queues are implemented as binary heaps and not as queues.
//  PRIORITY QUEUE maintains the property that the highest priority element is always at the root.
//  INDEXING IS ALLOWED IN PRIORITY QUEUE
//  ENQUEUE : Adds an element to the priority queue
//  DEQUEUE : Removes the element with the highest priority from the priority queue
//  TOP : Returns the element with the highest priority from the priority queue without removing it
//  EMPTY : Returns true if the priority queue is empty, false otherwise
//  SIZE : Returns the number of elements in the priority queue
//  SWAP : Swaps the contents of two priority queues

// Push log n
// Pop log n
// top O(1)



void explainPriorityQueue(){
    priority_queue<int> pq;
    pq.push(1);    // 1
    pq.push(2);    // 2, 1
    pq.push(8);    // 8, 2, 1
    pq.push(4);    // 8, 4, 2, 1 
    pq.push(5);    // 8, 5, 4, 2, 1

    cout << pq.top() << endl; // 8
    pq.pop();    // 5, 4, 2, 1  (highest priority element removed)
    cout << pq.top() << endl; // 5

    // doesnt support popping multiple elements or changing priority of an element
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    //  other operations are similar to stack

    // Minimum Priority Queue (priority_queue<int, vector<int>, greater<int>> pq)
    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(1);
    minPq.push(2);
    minPq.push(8);
    minPq.push(4);
    minPq.push(5);
    cout << minPq.top() << endl; // 1
    minPq.pop();
    cout << minPq.top() << endl; // 2

    //  other operations are similar to stack
}

int main() {
    explainPriorityQueue();

    return 0;
}