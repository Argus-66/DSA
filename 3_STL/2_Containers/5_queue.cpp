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

// Queue Container

//  FIRST IN FIRST OUT (FIFO) unlike Stacks, Queue follows the principle of First In First Out.
//  INDEXING IS ALLOWED IN QUEUE
//  ENQUEUE : Adds an element to the rear of the queue
//  DEQUEUE : Removes an element from the front of the queue
//  FRONT : Returns the front element of the queue without removing it
//  REAR : Returns the rear element of the queue without removing it
//  EMPTY : Returns true if the queue is empty, false otherwise
//  SIZE : Returns the number of elements in the queue
//  SWAP : Swaps the contents of two queues



void explainQueue(){
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1, 2
    q.push(3);    // 1, 2, 3
    q.push(4);    // 1, 2, 3, 4

    q.back() += 5; // 1, 2, 3, 9
    cout << q.front() << endl; // 1
    cout << q.back() << endl; // 9

    q.pop();    // 2, 3, 9
    cout << q.front() << endl; // 2

    //  other operations are similar to stack
}


int main() {
    explainQueue();

    return 0;
}