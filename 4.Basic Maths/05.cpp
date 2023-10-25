// Armstrong Numbers
#include <bits/stdc++.h>
using namespace std;

int cubeCheck (int num) {
    int cubedNumber = 0;
    while (num > 0) {
        int n = num % 10;
        cubedNumber = cubedNumber + pow(n,3);
        num = num / 10;
    }
    return cubedNumber;
}


int main() {
    int num = 1634;
    int cube = cubeCheck(num);
    if(num == cube) {
        cout << "true";
    } else {
        cout << "false";
    }

}