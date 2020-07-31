#include<iostream>
using namespace std;

int minNoOfMenu(int no){
    int temp = 0, cnt = 0, mask = 0x00000001;
    while( no > 2048){
        no = no - 2048;
        cnt++;
    }
    while(no != 0){
        if((no & 1) == 1){
            cnt++;
        }
        no = no >> 1;
    }
    return cnt;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<minNoOfMenu(no)<<endl;
    }
    return 0;
}

