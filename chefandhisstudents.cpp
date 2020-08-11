#include<iostream>
using namespace std;

int numberOfTalkingPairs(char *str){
    int cnt = 0;
    while(*str != '\0'){
        if((*str == '<') && (*(str+1) == '>')){
                cnt++;
                str = str + 2;
        } else {
            str++;
        }
    }
    return cnt;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char str[100000] = {'\0'};
        cin>>str;
        cout<<numberOfTalkingPairs(str)<<endl;
    }
    return 0;
}

