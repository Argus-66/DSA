#include <bits/stdc++.h>
using namespace std;

#define ll                       long long int
#define test                     ll t; cin>>t; while(t--)
#define ld                       long double
#define tolower(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::tolower)
#define toupper(s1)              transform(s1.begin(), s1.end(), s1.begin(), ::toupper)
#define PI                       3.1415926535897932384626433832795l
#define fori(n) for (int i = 0; i < n; i++)     //fori(n) {}
#define forj(n) for (int j = 0; j < n-1; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define pb                       push_back
#define set                      set<ll>
#define map                      map<ll,ll>
#define mod                      1000000007

// &a is used to pass by reference, changes made to the variable inside the function will reflect outside the function
// When you pass a variable by reference, you are giving the function direct access to the original variable in memory, rather than creating a copy of it. This allows the function to modify the original variable.
// otherwise the  value given here wont be given back to the main function
void numbers(int &a, int &b){
    cout << "enter the 2 numbers you want to add:"<< endl;
    cin >> a >> b;
}

void sum(int a, int b){
    
    int c = a + b;
    cout << "Sum is: " << c << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num1, num2;
    numbers(num1,num2);
    sum(num1, num2);


    return 0;
}