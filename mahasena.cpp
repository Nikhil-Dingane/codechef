#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;

    int arr[N];

    for(int i = 0 ; i < N ; i++){

        cin>>arr[i];
    }

    int lucky = 0;

    for(int i = 0 ; i < N ; i++){
        if((arr[i] % 2) == 0){
            lucky++;
        }
    }

    if(lucky > (N - lucky)){
        cout<<"READY FOR  BATTLE"<<endl;
    } else {
        cout<<"NOT READY"<<endl;
    }


    return 0;
}

