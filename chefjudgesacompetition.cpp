#include<iostream>
using namespace std;

int main(){

    int testCases = 0, n = 0, minuets = 0, iMax = 0, sumA = 0, sumB = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        sumA = 0;
        sumB = 0;
        iMax = 0;
        minuets = 0;
        n = 0;

        cin>>n;

        for(int i = 1; i <= n; i++){
            cin>>minuets;
            if(i == 1){
                iMax = minuets;
            } else {
                if(minuets > iMax){
                    iMax = minuets;
                }
            }
            sumA = sumA + minuets;
        }

        sumA = sumA - iMax;

        for(int i = 1; i <= n; i++){
            cin>>minuets;
            if(i == 1){
                iMax = minuets;
            } else {
                if(minuets > iMax){
                    iMax = minuets;
                }
            }
            sumB = sumB + minuets;
        }

        sumB = sumB - iMax;

        if(sumA > sumB){
            cout<<"Bob"<<endl;
        } else if (sumB > sumA){
            cout<<"Alice"<<endl;
        } else {
            cout<<"Draw"<<endl;
        }
    }
    return 0;
}


