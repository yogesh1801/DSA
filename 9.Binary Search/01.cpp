#include <bits/stdc++.h>
using namespace std;

// binary search iterative code
// givem a function with arr , arr length and target make a iterative code for binary search

int itrBinarySearch (int arr[] , int n , int target){
    // we get three parameters
    int low = 0;
    int high = n-1; // last index
    

    while (low <= high) {
        int mid = (low + high)/2;
        if(arr[mid] == target){
            return mid;
        } 
        else if(arr[mid] > target){
            high = mid-1;
        } else {
            low = mid + 1;
        }
    }
    return -1;

}

int recBinarySearch(int arr[] , int n , int target , int low , int high){
    // base case 
    if (low > high){
        return -1;
    }
    int mid = (low + high)/2;
    if (arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){
        return recBinarySearch(arr,n,target, low , mid-1);
    } else {
        return recBinarySearch(arr,n,target,mid+1,high);
    }


}


int main () {
    int testarray[5] = {1,2,3,4,5};
    cout << itrBinarySearch(testarray,5,9) << endl;
    cout << recBinarySearch(testarray,5,9 ,0,4);

    return 0;
}

// binary search 
// it is a search algorithm for very small search space 
// applicable on sorted things only
/**
 * So the search space must be sorted
 * we keep spliting the search space into 2 and so on , nice approach
 * 
 * we define the following terms
 * index - index of the elements
 * low - first element
 * high - last element
 * middle = low + high / 2 int part
 * target - the thing we need to find
 * 
 * 
 * update the high , low and mid according to the search space
 * 
 * the search return false once index of high is lower the index of low
*/