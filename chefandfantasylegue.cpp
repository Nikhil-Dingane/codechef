
#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int noOfPlayers = 0;
        cin>>noOfPlayers;
        int priceOfOwnedPlayers = 0;
        cin>>priceOfOwnedPlayers;

        int pricesOfPalyers[noOfPlayers] = {0};
        int typeOfPlayers[noOfPlayers] = {-1};

        for(int j = 0; j < noOfPlayers; j++){
            cin>>pricesOfPalyers[j];
        }

        for(int j = 0; j < noOfPlayers; j++){
            cin>>typeOfPlayers[j];
        }

        bool isValid = false;

        for(int j = 0; j < noOfPlayers-1; j++){
            for(int k = j+1; k < noOfPlayers; k++){
                if(((typeOfPlayers[j] == 0) && (typeOfPlayers[k] == 1)) || ((typeOfPlayers[j] == 1) && (typeOfPlayers[k] == 0))){
                    if((pricesOfPalyers[j] + pricesOfPalyers[k] + priceOfOwnedPlayers) <= 100){
                        isValid = true;
                        break;
                    }
                }
            }
        }

        cout<<(isValid?"yes":"no")<<endl;
    }
    return 0;
}
