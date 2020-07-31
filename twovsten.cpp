#include<iostream>
using namespace std;

int minimunTurnToDivideByTen(int no){
    if((no % 10) == 0)
        return 0;
    else if(((no*2)%10) == 0)
        return 1;
    else
        return -1;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no = 0;
        cin>>no;
        cout<<minimunTurnToDivideByTen(no)<<endl;
    }
    return 0;
}

