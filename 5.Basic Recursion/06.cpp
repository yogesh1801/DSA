// check if the string is palindrome
#include <bits/stdc++.h>
using namespace std;

// instead of swapping lets check the equality

int palindromeCheck (string str , int first , int length){
    if (first >= length/2){
        return 1;
    } else {
        if(str[first] == str[length-first-1]){
            return palindromeCheck(str , first +1,length);
        } else {
            return 0;
        }
    }
}


int main () {
    cout << palindromeCheck("madam",0,5);
    return 0;
}