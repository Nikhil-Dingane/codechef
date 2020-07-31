#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int N = 0;
        cin>>N;
        int first = 0, second = 0, count=0;
        for(int i = 1; i <= N; i++){
           cin>>first;
           cin>>second;
           if((second-first)>5){
               count++;
           }
        }
        cout<<count<<endl;
    }

    return 0;
}

