#include<iostream>
using namespace std;

int countOfSubArrays(int arr[], int arrSize){
    int sum = 0, prod = 1, iCnt = 0;
    for(int i = 0; i < arrSize; i++){
        sum = 0;
        prod = 1;
        for(int j = i; j < arrSize; j++){
            sum = sum + arr[j];
            prod = prod * arr[j];
            if(sum == prod){
                iCnt++;
            }
        }
    }
    return iCnt;
}

int main(){

    int testCases = 0;
    cin>>testCases;

    for(int test = 1 ; test <= testCases ; test++){

        int arr[51] = {0};

        int arrSize = 0;
        cin>>arrSize;

        for(int i = 0; i < arrSize; i++){
            cin>>arr[i];
        }
        cout<<countOfSubArrays(arr,arrSize)<<endl;
    }
    return 0;
}

