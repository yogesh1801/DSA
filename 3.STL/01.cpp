#include <bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int ,int> p = {1,3}; // almost like a object of 
    cout << p.first << " " << p.second << endl;
    pair<int , string> p2 = {1,"yogesh"}; //  this is allowed
    cout << p2.first << " " << p2.second;

    //nested pairs

    pair<int , pair<int,int>> p3 = {1,{2,3}};
    cout << p3.first << " " << p3.second.first << p3.second.second; 

    // array of pairs
    pair <int , int> arr[] = {{1,2} , {3,4}}; // this is a pair array apart from int array or a char array

    
}

int main() {

    explainpair();

    return 0;
}


// Learning about containers and iterators