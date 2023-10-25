#include <bits/stdc++.h>
using namespace std;
// print name N times using recursion

void printName (int count , int num) {
    if (count > num) {
        return;
    } else {
        cout << "yogesh" << endl;
        printName(count + 1 , num);
    }
}

void printNumber (int count , int num) {
    if (count > num) {
        return;
    }else {
        cout << count << endl;
        printNumber(count +1 , num);
    }
}

void printRev (int num) {
    if (num == 0) {
        return;
    }
    else {
        cout << num << endl;
        printRev(num-1);
    }
}
 

int main() {
    printName(1,5);
    printNumber(1,5);
    cout << " " << endl;
    printRev(5);
    return 0;
}


// Recursion 1
// when a function calls itself, until a specific condition is met 
// we need one base condition and also learn about stack overflow
// recursion tree , do it

