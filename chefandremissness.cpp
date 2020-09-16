#include<iostream>
using namespace std;

void printCount(int n, int m){
    if(n >= m){
        cout<<n<<" "<<(n + m)<<endl;
    } else {
        cout<<m<<" "<<(n + m)<<endl;
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, m = 0;

        cin>>n>>m;

        printCount(n,m);
    }
    return 0;
}

