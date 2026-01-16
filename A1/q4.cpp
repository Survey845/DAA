#include <iostream>
using namespace std;

int main(){
    int arr[8] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int length = 8;
    int curr_sum = arr[0];
    int max_so_far = arr[0];
    for(int i=0;i<length;i++){
        curr_sum = max(arr[i], curr_sum+arr[i]);
        if(curr_sum>max_so_far){
            max_so_far = curr_sum;
        }
    }
    cout<<max_so_far<<endl;
    return 0;
}

// OUTPUT
// 7
