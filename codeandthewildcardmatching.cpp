#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char str1[10];
        char str2[10];
        fflush(stdin);
        cin>>str1;
        fflush(stdin);
        cin>>str2;
        int i = 0;
        while((str1[i] != '\0') && (str2[i]!='\0')){
            if((str1[i]!=str2[i]) && (str1[i]!='?') && (str2[i]!='?')){
                break;
            }
            i++;
        }
        if((str1[i]=='\0')&&(str2[i]=='\0')){
            cout<<"Yes"<<endl;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

