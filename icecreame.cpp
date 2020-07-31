#include<iostream>
using namespace std;
#define fivesCoins 0
#define tensCoins 1
#define fifteensCoins 2

int main(){

    int testCases = 100;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int N=0,coin=0;

        cin>>N;
        int arr[3] = {0};

        bool flag = true;

        for(int i=0; i < N; i++){
            cin>>coin;

            if(coin == 5){
                arr[fivesCoins]++;
            } else if(coin == 10){
                if(arr[fivesCoins] > 0){
                    arr[tensCoins]++;
                    arr[fivesCoins]--;
                }
                else{
                    flag = false;
                }
            } else if(coin == 15){
                if(arr[tensCoins] > 0){
                    arr[fifteensCoins]++;
                    arr[tensCoins]--;
                } else if(arr[fivesCoins] >= 2){
                    arr[fifteensCoins]++;
                    arr[fivesCoins]-=2;
                } else{
                    flag = false;
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

