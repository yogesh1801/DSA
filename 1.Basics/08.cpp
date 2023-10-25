// function pass by value and pass by reference 
// make a function to get sum of two number 
#include <bits/stdc++.h>
using namespace std;
int Sum (int num1 , int num2){
    return num1 + num2;
}
void printName(string &name) {
    cout << name;
}


int main () {
    string name;
    getline(cin,name);
    printName(name);
    int num1 , num2;
    cin >> num1 >> num2;
    int sum = Sum(num1,num2);
    cout << sum; 
    return 0;
}

// pass by reference and pass by value in C++
// &can be used to pass by reference 
