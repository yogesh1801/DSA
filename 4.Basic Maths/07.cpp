#include <bits/stdc++.h>
using namespace std;

int gcd (int  num1 , int num2) {
    int answer = 0;
    for (int i =1 ; i <= min(num1,num2) ; i++){
        if (num1%i == 0 && num2%i == 0){
            answer = i;
        }
    }
    return answer;

}
// even better approach can be to decrease the number from highest to the lowest

// euclidian algortihm to find the gcd
// gcd(a,b) = gcd(a-b,b)
//better gcd(a,b) = gcd(a%d , b); 
void euclidian () {

}

int main () {
    cout << gcd(100,1000) << endl;
    return 0;
}