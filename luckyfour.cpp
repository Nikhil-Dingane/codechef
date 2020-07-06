#include<iostream>
using namespace std;

int calOccurranceOfFour(long int no){
    int iCnt = 0;
    while(no != 0){
        if((no%10) == 4)
            iCnt++;
        no /= 10;
    }
    return iCnt;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        long int no;
        cin>>no;
        cout<<calOccurranceOfFour(no)<<endl;
    }
    return 0;
}

