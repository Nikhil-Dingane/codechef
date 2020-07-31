#include<iostream>
using namespace std;

bool chkString(char str[]){
    int arr[26] = {0};
    while(*str != '\0'){

        if(arr[(*str)-97] == 0){
            arr[(*str)-97]++;
        } else {
            arr[(*str)-97] = 0;
        }
        str++;
    }
    int i = 0;
    for(i = 0; i < 26; i++){
        if(arr[i] != 0){
            break;
        }
    }
    if(i == 26){
        return true;
    } else {
        return false;
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;
        cin>>n;
        char str[n] = {'\0'};
        cin>>str;
        cout<<(chkString(str)? "YES" : "NO")<<endl;
    }
    return 0;
}


