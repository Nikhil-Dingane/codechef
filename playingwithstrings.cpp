#include<iostream>
using namespace std;

bool canBeIdentical(char *str1, char *str2, int strSize){
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < strSize; i++, str1++, str2++){
        if(*str1 == '1'){
            cnt1++;
        }
        if(*str2 == '1'){
            cnt2++;
        }
    }

    return cnt1 == cnt2;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;
        cin>>n;
        char *str1 = new char[n];
        char *str2 = new char[n];

        cin>>str1>>str2;

        cout<<(canBeIdentical(str1,str2,n) ? "YES" : "NO")<<endl;
    }
    return 0;
}

