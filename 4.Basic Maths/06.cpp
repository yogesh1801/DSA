// print all divisors
#include <bits/stdc++.h>
using namespace std;

void divisors (int num) {
    // need to print all divisors i.e modulo is zero

    for (int i = 1 ; i <=num/2 ; i++) {
        if (num%i == 0) {
            cout << i << endl;
        }
    }
    cout << num;
}

void betterWay (int num) {
    for (int i = 1 ; i <= sqrt(num) ; i++) {
        if (num%i == 0){
            cout << i << endl;
            if (i != num/i){
                cout << num/i << endl;
            }
        }
    }
}


int main () {
    //divisors(36);
    betterWay(36);
    return 0;
}