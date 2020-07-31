#include<iostream>
using namespace std;

int longJump(int arr[],int arrSize){
    int minJump = arr[0];
    for(int i = 1; i < arrSize; i++){
        if(minJump > arr[i]){
            minJump = arr[i];
        }
    }
    return minJump;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int arrSize = 0;
        cin>>arrSize;
        int *arr = new int[arrSize];

        for(int i = 0; i < arrSize; i++){
            cin>>arr[i];
        }
        cout<<longJump(arr,arrSize)<<endl;
    }
    return 0;
}

