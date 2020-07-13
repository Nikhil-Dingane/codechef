#include<iostream>
using namespace std;

bool isPrime(int no){
    int i = 0;
    for(i = 2; i <= (no/2); i++){
        if((no % i) == 0){
            break;
        }
    }
    return (i <= (no/2) ? false : true);
}

int minNumberOfPotatoes(int x, int y){
    int requiredNoOfPotatoes = 0;
    int i = (x + y)+1;

    while(!isPrime(i)){
        i++;
    }
    return i - (x + y);
}

int main(){
    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int x = 0, y = 0;
        cin>>x>>y;
        cout<<minNumberOfPotatoes(x,y)<<endl;
    }
    return 0;
}

