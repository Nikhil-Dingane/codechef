#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int year = 0;

        cin>>year;

        if((year == 2010) || (year == 2015) || (year == 2016) || (year == 2017) || (year == 2019)){
            cout<<"HOSTED"<<endl;
        } else {
            cout<<"NOT HOSTED"<<endl;
        }
    }
    return 0;
}
