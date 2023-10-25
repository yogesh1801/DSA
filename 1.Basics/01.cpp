#include<iostream> // to take input or output
#include<math.h>
#include<bits/stdc++.h> //  all libraries are taken

using namespace std;
// uses std wherever needed

int main() {
    cout << "yogesh" << endl << "singla" << endl;
    int y1 = 10; // declaring a varibale
    long y2 = 55;
    long long y3 = 555555;

    float f1 = 5565.54;
    double f2 = 54.92;

    // string and getline
    // string s1;
    // cin >> s1; // will pickup only first word of input

    // cout << s1 << endl;

    // picking up whole input

    string s2;
    getline(cin,s2);
    cout << s2;

    // char
    char g = 'g'; //always single quotes



    // taking a input
    // int x;
    // cin >> x;
    // cout << "value of x " << x;

    return 0;
}

// int main() {
//     std::cout<< "yogesh" << std::endl << "singla" << std::endl;
//     std::cout << "my name is yogesh";
//     return 0;
// }

// we can use std but is very annoying hence use namespace


// lecture flow
/**
 * 1) cout , std , namespace , cin
 * 2) <bits/stdc++.h>
 * 3) data types
 * 4) getLine to get complete input in
*/