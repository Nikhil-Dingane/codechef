#include<iostream>
using namespace std;

int calScholPerc(int no){
    if((no <= 50) && (no >=1) )
         return 100;
    else if((no >= 51) && (no <= 100))
        return 50;
    else
        return 0;
}

int main(){

    int no;
    cin>>no;
    cout<<calScholPerc(no)<<endl;
    return 0;
}

