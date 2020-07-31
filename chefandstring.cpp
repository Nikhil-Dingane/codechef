#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        string str;
        cin>>str;
        int pairCount = 0;
        for(int i = 0 ; i < str.length() - 1; i++){
            if((str[i] == 'x' && str[i+1] == 'y') || (str[i] == 'y' && str[i+1] == 'x')){
                pairCount++;
                i++;
            }
        }
        cout<<pairCount<<endl;
    }


    return 0;
}
