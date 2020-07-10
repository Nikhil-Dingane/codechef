#include<iostream>
using namespace std;

int getSum(int d, int n){
    for(int i=1;i<=d;i++){
        n= (n*(n+1))/2;
    }
    return n;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, d = 0;
        cin>>n>>d;
        cout<<getSum(n,d)<<endl;
    }
    return 0;
}

