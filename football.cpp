#include<iostream>
using namespace std;

int maxPoints(int arr[], int brr[], int n){
    int maxScore = 0;
    for(int i = i; i < n; i++){
       if(maxScore < ((arr[i]*20)-(brr[i]*10))){
            maxScore = ((arr[i]*20)-(brr[i]*10));
       }
    }
     return maxScore;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;
        cin>>n;
        int *arr = new int[n];
        int *brr = new int[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            cin>>brr[i];
        }
        cout<<maxPoints(arr,brr,n)<<endl;
    }
    return 0;
}

