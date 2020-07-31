#include<iostream>
using namespace std;

int minNumberOfSwitches(char *str){
    int numberOfA = 0, numberOfB = 0;

    while(*str != '\0'){
        if((*str) == 'a'){
            numberOfA++;
        } else {
            numberOfB++;
        }
        str++;
    }
    return (numberOfA <= numberOfB ? numberOfA : numberOfB);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char str[100] = {'\0'};
        cin>>str;
        cout<<minNumberOfSwitches(str)<<endl;
    }
    return 0;
}

