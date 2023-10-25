#include<bits/stdc++.h>
using namespace std;
// program to show grades
int main(){
    int marks;
    cin >> marks;
    if (marks <= 25){
        cout << "E";
    } else if(marks <=44){
        cout << "E";
    } else if (marks <= 49) {
        cout << "D";
    }
// this can be done to do so


    return 0;
}

// learn about how else if is better than multiple if

/**
 * You can use the result of previous if bcz else if statment is only exceuted once previous statement has been declared false.
 * 
 * It is much faster
*/
