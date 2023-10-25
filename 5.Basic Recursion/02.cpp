// print 1 to N  , using backtracking do it
// start making recursion trees
// backtracking means the remaining functions are printed once all the functions have been executed
#include<bits/stdc++.h>
using namespace std;

void backTrack12N (int num) {
    if (num <= 0) {
        return;
    }else {
        backTrack12N(num-1);
        cout << num;
    }
}

void backtrackN21 (int count ,int num) {
    if(count > num){
        return;
    }else {
        backtrackN21(count+1 , num);
        cout << count;
    }
}




int main () {
    backtrackN21(1,5);
}