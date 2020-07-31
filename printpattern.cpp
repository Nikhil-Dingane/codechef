#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){

        int N;
        cin>>N;

        int num = 1;
        int arr[N][N];

        for(int i = 0; i < N; i++){
            for(int col = i, row = 0; col >= 0; col--,row++){
                arr[col][row] = num++;
            }
        }

        for(int i = 1; i < N; i++){
            for(int col = N - 1, row = i; row < N; row++, col--){
                arr[col][row] = num++;
            }
        }

        for(int col = 0; col < N; col++){
            for(int row = 0; row < N; row++){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
