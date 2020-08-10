#include<iostream>
using namespace std;

bool isPallindrome(int no){
    int temp = no, rev = 0;
    while(temp != 0){
        rev = (rev * 10) + (temp%10);
        temp = temp / 10;
    }
    return (rev == no);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no = 0;
        cin>>no;
        cout<<(isPallindrome(no) ? "wins" : "loses")<<endl;
    }
    return 0;
}


