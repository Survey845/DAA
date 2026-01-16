#include <iostream>
using namespace std;

void Merge(int* arr, int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[p+i];
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[q+j+1];
    }

    int i=0;
    int j=0;
    int k=p;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        } else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;

}

void MergeSort(int* arr, int p, int r){
    if(p<r){
        int q = p+(r-p)/2;
        MergeSort(arr,p,q);
        MergeSort(arr,q+1,r);
        Merge(arr, p, q, r);
    }
}

void print(int* arr, int length){
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {12, 11, 13, 5, 6, 7};
    int arr2[] = {38, 27, 43,3, 9, 82, 10};
    int length_arr1 = sizeof(arr1)/sizeof(arr1[0])-1;
    int length_arr2 = sizeof(arr2)/sizeof(arr2[0])-1;
    MergeSort(arr1, 0, length_arr1);
    print(arr1, length_arr1);
    MergeSort(arr2, 0, length_arr2);
    print(arr2, length_arr2);
    return 0;
}

// OUTPUT
// 5 6 7 11 12
// 3 9 10 27 38 43
