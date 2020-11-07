#include<iostream>
using namespace std;

int sumOfDigits(int no){
    int sum = 0;

    while(no != 0){
        sum = sum + (no%10);
        no = no / 10;
    }
    return sum;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<sumOfDigits(no)<<endl;
    }
    return 0;
}

