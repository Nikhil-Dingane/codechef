#include<iostream>
using namespace std;

int calculateMarks(char arr[], char brr[], int n){
    int previous = 0, marks = 0;

    for(int i = 0; i < n; i++){
        if(brr[i] == 'N'){
            previous = 0;
        } else if(i == (n-1)){
            if(arr[i] == brr[i]){
                marks++;
            }
        } else {
            if((previous == 0) && (arr[i] == brr[i])){
                previous = 0;
                marks++;
            } else if((previous == 1) && (arr[i] != brr[i])){
                previous = 0;
            } else if((previous == 0) && (arr[i] != brr[i])){
                previous = 1;
            } else if((previous == 1) && (arr[i] == brr[i])){
                previous = 0;
            }
        }
    }
    return marks;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;

        cin>>n;

        char *arr = new char[n];
        char *brr = new char[n];

        cin>>arr;
        cin>>brr;

        cout<<calculateMarks(arr,brr,n)<<endl;
    }
    return 0;
}

