#include<iostream>
using namespace std;

int firstAndLastDigitSum(int no){
    int sum = no % 10;
    do{
        no = no / 10;
    }while(no > 9);
    return sum + no;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    int *arr = new int[testCases];
    for(int i = 0; i < testCases; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < testCases; i++){
        cout<<firstAndLastDigitSum(arr[i])<<endl;
    }
    return 0;
}

