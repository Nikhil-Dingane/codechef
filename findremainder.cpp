#include<iostream>
using namespace std;

int getRemainder(int a,int b){
    return a%b;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int a = 0, b = 0;
        cin>>a>>b;
        cout<<getRemainder(a,b)<<endl;
    }
    return 0;
}

