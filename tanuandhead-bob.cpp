
#include<iostream>
using namespace std;

string identifyGesture(char arr[], int n){

    string citizen = "NOT SURE";

    for(int i = 0; i < n; i++){
        if(arr[i] == 'Y'){
            citizen = "NOT INDIAN";
            break;
        } else if(arr[i] == 'I'){
            citizen = "INDIAN";
            break;
        }
    }
    return citizen;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;

        cin>>n;

        char arr[n] = {'\0'};

        cin>>arr;

        cout<<identifyGesture(arr,n)<<endl;
    }
    return 0;
}

