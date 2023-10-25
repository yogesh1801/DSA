// count the number of digits in the given number

#include <bits/stdc++.h>
using namespace std;

int CountDigits(int num) {
    int count = 0;
    while (num > 0) {
        count = count +1;
        num = num /10;
    }
    return count;
}

// another way to count so

int countDigitsLog(int num) {
    int count = (int) (log10(num) + 1);
    return count;
}

int main () {
    int count = CountDigits(7515545);
    int count2 = countDigitsLog(7515545);
    cout << count << endl << count2 << endl;
}