// palindrome check for a number not string
#include<bits/stdc++.h>
using namespace std;

int revNumber (int num) {
    int revNumber  = 0;
    while (num > 0) {
        int n = num%10;
        revNumber = (revNumber*10) + n;
        num = num/10;
    }
    return revNumber;
}

bool palindromeCheck (int num) {
    int rev = revNumber(num);
    if (num == rev) {
        return true;
    }else {
        return false;
    }

}

int main () {
    cout << palindromeCheck(122) << endl;
}