#include<iostream>
using namespace std;

bool isValid(int a, int b, int c){
    return ((a+b+c) == 180);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int a = 0, b = 0, c = 0;
        cin>>a>>b>>c;
        cout<<(isValid(a,b,c) ? "YES" : "NO")<<endl;
    }
    return 0;
}

