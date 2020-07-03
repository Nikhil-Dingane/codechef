#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int first = 0, second = 0;

        cin>>first>>second;

        if(first > second){
            cout<<">"<<endl;
        } else if (first < second){
            cout<<"<"<<endl;
        } else{
            cout<<"="<<endl;
        }
    }
    return 0;
}
