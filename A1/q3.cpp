#include <iostream>
using namespace std;

int Partition(int* arr, int p, int r){
    int x = arr[r];
    int i=-1;
    for(int j=0;j<r;j++){
        if(arr[j]<x){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = x;
    arr[r] = temp;
    return i;
}

void QuickSort(int* arr, int p, int r){
    if(p<r){
        int q = Partition(arr,p,r);
        QuickSort(arr,p,q-1);
        QuickSort(arr,q+1,r);
    }
}

int main(){
    int arr[5] =  {4, 2, 6, 9, 2};
    int length = sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0, length-1);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

// OUTPUT
// 2 2 4 6 9
