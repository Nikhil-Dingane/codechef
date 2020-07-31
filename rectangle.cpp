#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int a,b,c,d,t;
        cin>>a>>b>>c>>d;
        if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c)){
            printf("\nYES");
        }
        else
        {
            printf("\nNO");
        }

    }
    return 0;
}
