#include<iostream>
using namespace std;

bool isPrime(int no){
    int i = 2;
    while( i <= (no / 2)){
        if((no % i) == 0){
            break;
        }
        i++;
    }
    return !(i <= (no / 2));
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int no;
        cin>>no;
        cout<<(isPrime(no) ? "yes" : "no")<<endl;
    }
    return 0;
}

