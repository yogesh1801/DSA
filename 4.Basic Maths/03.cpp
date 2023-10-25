#include<bits/stdc++.h>
using namespace std;

// reverse a number 

int reverseDigits (int num) {
    int revNumber = 0;
    while(num > 0) {
        int n = num%10;
        revNumber = (revNumber*10) + n;
        num = num /10;
    }
    return revNumber;

}

int main () {
    int rev = reverseDigits(1234);
    cout << rev << endl;
}