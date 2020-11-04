#include<iostream>
using namespace std;

string identifyShip(char c){
    if((c == 'B') || (c == 'b')){
        return "BattleShip";
    } else if((c == 'C') || (c == 'c')){
        return "Cruiser";
    } else if((c == 'D') || (c == 'd')){
        return "Destroyer";
    } else if((c == 'F') || (c == 'f')){
        return "Frigate";
    } else {
        return "Invalid";
    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char c;
        cin>>c;

        cout<<identifyShip(c)<<endl;
    }
    return 0;
}

