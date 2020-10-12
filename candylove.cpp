#include<iostream>
using namespace std;

void fun(){

}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, sum = 0, temp = 0;

        cin>>n;

        while(n){
            cin>>temp;
            sum = sum + temp;
            n--;
        }

        if(sum % 2){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

