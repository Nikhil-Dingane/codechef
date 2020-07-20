#include<iostream>
using namespace std;

void showName(int contests[]){
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(contests[i] == 1){
            cnt++;
        }
    }

    switch(cnt){
        case 0:
            cout<<"Beginner"<<endl;
            break;
        case 1:
            cout<<"Junior Developer"<<endl;
            break;
        case 2:
            cout<<"Middle Developer"<<endl;
            break;
        case 3:
            cout<<"Senior Developer"<<endl;
            break;
        case 4:
            cout<<"Hacker"<<endl;
            break;
        case 5:
            cout<<"Jeff Dean"<<endl;
            break;
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int contests[5] = {0};
        for(int i = 0; i < 5; i++){
            cin>>contests[i];
        }
        showName(contests);
    }
    return 0;
}

