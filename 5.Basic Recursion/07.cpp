// multiple recursion calls

#include <bits/stdc++.h>
using namespace std;

// fibonacci series using multiple recursion calls

// for given N return Nth fibbonachi number
// idea f(N) = f(N-1) + f(N-2);
// base case f(0) = 0 and f(1) = 1;

int fibonumber (int n) {
    //base case 
    if (n <=1){
        return n;
    } else {
        return fibonumber(n-1) + fibonumber(n-2);
    }
    // note first if two recursion calls happen the first recursion calls get completed then only next task happens

    // see video nice explaination
    // try making recursion tree
}




int main () {
    cout << fibonumber(15);
    return 0;
}