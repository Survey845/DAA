#include <iostream>
using namespace std;

int binarySearch(int* arr, int target, int l, int r){
    int mid = -1;
    while(l<r){
        mid = (r+l)/2;
        if(arr[mid]==target){
            return mid;
        } else if(arr[mid]<target){
            l=mid+1;
        } else{
            r = mid-1;
        }
    }
    return mid;
}

int main(){
    int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int length = sizeof(arr)/sizeof(arr[0]);
    int target = 23;
    int answer_index = binarySearch(arr, target, 0, length-1);
    cout<<"The target number is on index: "<<answer_index<<endl;
    return 0;
}

// OUTPUT
// -2, -5, 6, -2, -3, 1, 5, -6}
