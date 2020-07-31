#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int testCases = 0, n = 0, mvs = 0, a = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        cin>>n;
        while(n!=0){
            a=sqrt(n);
            n=n-(a*a);
            mvs+=1;
        }
        cout<<mvs<<endl;
        mvs=0;
    }
    return 0;
}
