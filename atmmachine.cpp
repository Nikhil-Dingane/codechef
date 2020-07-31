#include<iostream>
using namespace std;

void atmMachine(int widthdrawList[], int amount,int noOfUsers){
    for(int i = 0; i < noOfUsers; i++){
        if(amount == 0){
            cout<<0;
        } else {
            if((amount - widthdrawList[i]) >= 0){
                cout<<1;
                amount = amount - widthdrawList[i];
            }else{
                cout<<0;
            }
        }
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int noOfUsers = 0, amount = 0;
        cin>>noOfUsers>>amount;
        int *widthdrawList = new int[noOfUsers];

        for(int i = 0; i < noOfUsers; i++){
            cin>>widthdrawList[i];
        }

        atmMachine(widthdrawList,amount,noOfUsers);
        cout<<endl;
    }
    return 0;
}

