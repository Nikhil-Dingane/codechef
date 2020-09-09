#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, k = 0, boughtProtien = 0, remainingProtien = 0, shortage = 0;
        bool flag = true;

        cin>>n>>k;

        for(int i = 1; i <= n; i++){
            cin>>boughtProtien;

            remainingProtien = remainingProtien + boughtProtien;

            if(flag){
                if((remainingProtien - k) >= 0){
                    remainingProtien = remainingProtien - k;
                } else if(flag){
                    shortage = k - remainingProtien;
                    flag = false;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO "<<shortage<<endl;
        }
    }
    return 0;
}

