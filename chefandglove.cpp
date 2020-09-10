#include<iostream>
using namespace std;

int getGloveType(int fingers[],int sheath[], int n){
    int frontSide = 1, backside = 2;

    for(int i = 0, j = (n -1); (i < n) && ((frontSide != 0) || (backside != 0)); i++, j--){
        if(fingers[i] > sheath[i]){
            frontSide = 0;
        }
        if(fingers[i] > sheath[j]){
            backside = 0;
        }
    }

    return (frontSide + backside);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0;

        cin>>n;

        int fingers[n] = {0};
        int sheath[n] = {0};

        for(int i = 0; i < n; i++){
            cin>>fingers[i];
        }

        for(int i = 0; i < n; i++){
            cin>>sheath[i];
        }

        switch(getGloveType(fingers,sheath,n))
        {
            case 1:
                cout<<"front"<<endl;
                break;
            case 2:
                cout<<"back"<<endl;
                break;
            case 3:
                cout<<"both"<<endl;
                break;
            default:
                cout<<"none"<<endl;
                break;
        }
    }
    return 0;
}

