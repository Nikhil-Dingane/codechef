#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int N = 0, M = 0;

        cin>>N>>M;

        cout<<(N-1)*(M-1)<<endl;
    }
    return 0;
}

