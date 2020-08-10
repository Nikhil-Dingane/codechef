#include<iostream>
using namespace std;

int smallFactorial(int no){
    long int fact = 1;
    for(int i = 1; i <= no; i++){
        fact *= i;
    }
    return fact;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no = 0;
        cin>>no;
        cout<<smallFactorial(no)<<endl;
    }
    return 0;
}

