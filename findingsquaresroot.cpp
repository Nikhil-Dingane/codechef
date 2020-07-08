#include<iostream>
using namespace std;

int findSquareRoot(int no){

    int i = 0;
    while((i * i) <= no){
        i = i + 1;
    }

    return i - 1;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<findSquareRoot(no)<<endl;
    }
    return 0;
}


