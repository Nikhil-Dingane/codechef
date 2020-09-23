#include<iostream>
using namespace std;

bool isUniform(char str[]){
    int cnt = 0, i = 0;

    for(i = 1; i < 8 ; i++){
        if(str[i] != str[i-1]){
            cnt++;
        }
    }
    return (cnt <= 2);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char str[9] = {'\0'};
        cin>>str;
        cout<<(isUniform(str) ? "uniform" : "non-uniform")<<endl;
    }
    return 0;
}

