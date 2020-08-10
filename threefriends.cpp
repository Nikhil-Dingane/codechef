#include<iostream>
using namespace std;

int check(int x, int y, int z){
    bool flag = false;

    if(x+y+z == 0)
        flag = true;
    else if(x+y-z == 0)
        flag = true;
    else if(x-y+z == 0)
        flag = true;
    else if(-x+y+z == 0)
        flag = true;
    else  if(x-y-z == 0)
        flag = true;
    else if(-x+y-z == 0)
        flag = true;
    else if(-x-y+z == 0)
        flag = true;
    else if(-x-y-z == 0)
        flag = true;

    return flag;
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int a = 0, b = 0, c = 0;
        cin>>a>>b>>c;
        cout<<(check(a,b,c)?"yes":"no");
    }
    return 0;
}

