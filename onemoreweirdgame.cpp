#include<iostream>
using namespace std;

int getScore(int n, int m){
    return (n*(m-1)+m*(n-1));
}

int main(){

    int testCases = 0, n = 0, m = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        cin>>n>>m;
        cout<<getScore(n,m)<<endl;
    }
    return 0;
}

