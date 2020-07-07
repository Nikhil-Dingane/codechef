#include<iostream>
using namespace std;

void compareStrings(char* str1, char* str2){
    int iMin = 0, iMax = 0;
    for(int i=0;str1[i];i++){

        if(str1[i]=='?' || str2[i]=='?')
            iMax++;
        else if(str1[i]!=str2[i])
        {
            iMax++;
            iMin++;
        }
    }
    cout<<iMin<<" "<<iMax<<endl;
}

int main(){

    int testCases = 0;

    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char str1[100] = {'\0'},str2[100] = {'\0'};
        cin>>str1>>str2;
        compareStrings(str1,str2);
    }
    return 0;
}

