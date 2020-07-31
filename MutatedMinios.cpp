#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){

        int arraySize = 0;
        int mutateValue = 0;

        cin>>arraySize>>mutateValue;

        int arr[arraySize];

        for(int i = 0 ; i < arraySize ; i++){
            cin>>arr[i];
        }

        int noOfMutedMinios = 0;

        for(int i = 0 ; i < arraySize ; i++){

            if((arr[i] + mutateValue) % 7 == 0){
                noOfMutedMinios++;
            }

        }
        cout<<noOfMutedMinios<<endl;
    }
    return 0;
}
