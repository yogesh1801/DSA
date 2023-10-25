// for loops in C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i=0 ; i<5 ; i++){
        cout << "yogesh" << endl;
    }
    // here scope of i is only inside the for loop

    // doing the while loop
    int i =0;
    while(i<=5) {
        cout << "yogesh" << endl;
        i = i+1;
    }

    // do while loop // minimun one time execution
    int j =2;
    do {
        cout << "yoge" << endl;
        j++;
    } while (j<2);
    return 0;
}