#include<iostream>

using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, iMax = 0, no = 0;

        cin>>n;

        for(int i = 1 ; i <= n ; i++){
            cin>>no;
            if(no > iMax)
                iMax = no;
        }

        cout<<iMax<<endl;
    }
    return 0;
}
