// learn about switch statments

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;

    switch (number)
    {
    case 1 :
        cout << "Monday";
        break;
    case 2 : 
        cout << "Tuesday";
        break;
    default:
        cout << "Invalid output";
        break;
    }
}