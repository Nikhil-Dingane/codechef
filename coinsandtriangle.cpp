#include<iostream>
using namespace std;

int getHeight(int n){
    int height = 0, i = 1;

    while((n - i) >= 0){
        height++;
        n = n - i;
        i++;
    }

    return height;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;

        cin>>n;

        cout<<getHeight(n)<<endl;
    }
    return 0;
}

