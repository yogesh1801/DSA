// find factorial of n
#include <bits/stdc++.h>
using namespace std;

int factorial (int n) {
    // base case
    if (n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}


int main () {
    cout << factorial(4);
    return 0;
}