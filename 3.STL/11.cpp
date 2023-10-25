// making our own comparator (imp)

#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1 , pair<int,int>p2) {

    // lets face these two instances

    // first sort according the second element
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false; //  hence swap
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false; // swap

    // all cases have been covered
}



void ownComparator() {

    pair<int,int> a[] = {{1,2} , {2,1} , {4,1}};

    // sort according to the second element ascending order
    // if second element is same , then sort according to the first element but in descending order

    // remember to break the problems into simpler parts first

    // lets make a comparator which is always a boolean function


    int num = 7;
    int cnt = __builtin_popcount(num); // give number of bits which are one in 32 bit system

    long long num2 = 6525656654;
    int cnt2 = __builtin_popcountll(num2);







}



int main () {

    return 0;

}