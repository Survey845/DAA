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
    int arr[7] = {9,6,5,0,8,2,7};
    int n = 7;
    cout<<"Starting Quick Sort"<<endl;
    QuickSort(arr,0,n-1);
    cout<<"Quick Sort ended"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
