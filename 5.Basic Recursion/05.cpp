// functional recursion
#include <bits/stdc++.h>
using namespace std;
// reverse an array using recursion
// thought  - swap the first and last and keep on doing this

void swap (int arr[] , int first , int last) {
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;
    // swap done
}

void revArr (int arr[] ,int first , int last) {
    if(last <= first) {
        return ;
    } else {
        swap(arr,first,last);
        return revArr(arr , first +1 , last -1);
    }
}


int main () {
    int arr[4] = {1,2,3,4};
    revArr(arr,0,3);
    for (int i=0 ; i<4 ; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}