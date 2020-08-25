#include<iostream>
using namespace std;

void encodeMessage(char arr[], int n){
    char temp;
    for(int i = 0 ; i < n-1; i = i + 2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i = 0 ; i < n; ++i){
        temp = arr[i] - 97;
        arr[i] = 122 - temp;
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;
        cin>>n;
        char *arr = new char[n];
        cin>>arr;
        encodeMessage(arr,n);
        cout<<arr<<endl;
    }
    return 0;
}

