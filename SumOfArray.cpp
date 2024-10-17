#include<iostream>
using namespace std;

int SumOfArray(int arr[], int size){
    if(size == 0){
        return 0;
    }
    int result = arr[size - 1] + SumOfArray(arr, size - 1);
    return result;
    }

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = SumOfArray(arr, size);
    cout << "Sum Of Array's Elements Is = " <<result << endl;
}