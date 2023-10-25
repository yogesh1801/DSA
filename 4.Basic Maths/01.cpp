// extraction of digit
// print all digits of the given number 
#include <bits/stdc++.h>
using namespace std;


int main () {


    // extraction of digits
    int num = 7845154;
    // give all the digits out of it 
    // idea take modulo from 10

    while(num > 0) {
        int lastdigit = num % 10;
        // returns the last digit
        cout << lastdigit << endl;
        num = num /10 ; 
        // num updated
    }
    cout << "process completed";
    return 0;
}