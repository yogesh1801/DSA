// learn functions later
// some other algorithms

#include <bits/stdc++.h>
using namespace std;

void inbuiltSorting () {
    int arr[] = {1,10,3};
    sort(arr , arr+3);
    for (auto i : arr) {
        cout << i << " ";
    }

    cout << endl;

    vector<int> v1(3,10); // 3 instances of 10
    for (auto i : v1){
        cout << i << " ";
    }

    sort(v1.begin() , v1.end()); // return an iterator which is then sorted 
    // sort function takes the addresses only
    
    // default sorts in ascending order
    
    // to sort in decending order we use inbuilt comparators

    sort(arr , arr + 3 , greater<int>()); //use the greater <int> comparator
}



int main() {
    inbuiltSorting();
    return 0;
}