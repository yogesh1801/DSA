#include<bits/stdc++.h>
using namespace std;

// using paramterized recursion give sum of first N digits

void paramsum (int n , int sum) {
    if (n < 1) {
        cout << sum << endl;
        return;
        // this is the base case
    } else {
        paramsum(n-1 , sum + n);
    }
}
// really impressive approach

// functional approach (important)

int functionalsum (int n) {
    // first write base case
    if (n == 0) {
        return 0;
    } else {
        return n + functionalsum(n-1);
    }
}


int main () {
    paramsum(10,0);
    cout << functionalsum(10);
    return 0;
}