#include<iostream>
using namespace std;

int* newList(int arr[], int n){
    int *brr = new int[n];
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cnt = 0;
        for(int j = 0 ; j < n ; j++){
            if((arr[j] > arr[i]) && (i != j)){
                cnt++;
            }
        }
        brr[i] = cnt;
    }
    return brr;
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
        int *brr = newList(arr,n);
        for(int i = 0; i < n; i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


