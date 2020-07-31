#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int xCandies = 0, yCandies = 0;

        cin>>xCandies>>yCandies;

        int i = 1;
        string winnerName;
        while(true){
            xCandies = xCandies - i;
            if(xCandies < 0){
                winnerName = "Bob";
                break;
            }

            yCandies = yCandies - (i+1);
            if(yCandies < 0){
                winnerName = "Limak";
                break;
            }
            i+=2;
        }
        cout<<winnerName<<endl;
    }
    return 0;
}
