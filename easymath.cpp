#include<iostream>
using namespace std;


int sumOfDigit(int no){
    int sum = 0;
    while(no != 0){
        sum = sum + (no%10);
        no = no / 10;
    }
    return sum;
}

int prodOfMaxSum(int *arr, int n){
    int productWithMaxSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = (i + 1); j < n; j++){
            if(sumOfDigit(arr[i] * arr[j]) > productWithMaxSum){
                productWithMaxSum = sumOfDigit(arr[i] * arr[j]);
            }
        }
    }
    return productWithMaxSum;
}


int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cout<<prodOfMaxSum(arr,n)<<endl;
    }
    return 0;
}

