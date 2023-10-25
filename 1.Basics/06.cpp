// strings in C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "yogesh";
    int length = s.size(); //  gives size
    cout << length << endl;
    // stores everything like a array
    cout << s[1] << endl;
    s[length-1] = 'H'; //  this is allowed
    cout << s;
}