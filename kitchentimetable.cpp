#include<iostream>
using namespace std;

int maxNoOfStudentToCook(int arr[], int brr[], int n){
    int cnt = 0;
    for(int i = i; i < n; i++){
        if((i == 0) && (arr[i] > brr[i])){
            cnt++;
        } else if((arr[i] - arr[i-1]) >= brr[i]){
            cnt++;
        }
    }
     return cnt;
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
        cout<<maxNoOfStudentToCook(arr,brr,n)<<endl;
    }
    return 0;
}

