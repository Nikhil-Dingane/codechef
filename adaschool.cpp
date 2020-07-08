#include<iostream>
using namespace std;

bool isConditionSatiesfy(int n, int m){
    if(((n*m) % 2) == 0){
        return true;
    } else {
        return false;
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, m = 0;
        cin>>n>>m;
        cout<<(isConditionSatiesfy(n,m)?"YES":"NO")<<endl;
    }
    return 0;
}

