#include<iostream>
using namespace std;

void sortArr(int *arr, int arrSize){
    for(int i = 0; i < arrSize; i++){
        for(int j = (i + 1); j < arrSize; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int initialElements = 0, elementsTobeAdd = 0;
        cin>>initialElements>>elementsTobeAdd;
        int *arr = new int[initialElements];
        for(int i = 0; i < initialElements; i++){
            cin>>arr[i];
        }
        sortArr(arr,initialElements);
        cout<<arr[(initialElements + elementsTobeAdd) / 2]<<endl;
    }
    return 0;
}


