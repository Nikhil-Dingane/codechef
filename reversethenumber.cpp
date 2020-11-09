#include<iostream>
using namespace std;

int reverseTheNumber(int no){
    int revNo = 0;

    while(no != 0){
        revNo = (revNo * 10) + (no % 10);
        no = no / 10;
    }

    return revNo;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<reverseTheNumber(no)<<endl;
    }
    return 0;
}


