#include<iostream>
using namespace std;

string isValidEntry(char entries[]){
    int i = 0;
    for(i = 0; entries[i] != '\0'; i = i + 2){
        if(((entries[i] == 'A') && (entries[i+1] != 'B')) || ((entries[i] == 'B') && (entries[i+1] != 'A'))){
            break;
        }
    }
    return (entries[i] == '\0'? "yes" : "no");
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char entries[100] = {'\0'};
        cin>>entries;
        cout<<isValidEntry(entries)<<endl;
    }
    return 0;
}

