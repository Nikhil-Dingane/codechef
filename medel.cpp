#include<iostream>
using namespace std;

int main(){

    int testCases = 74;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0 ; i < N ; i++){
            cin>>arr[i];
        }

        int first = arr[0], second = arr[1];

        for(int i = 2 ; i < N ; i++){
            if(((first > second) && (first < arr[i])) || ((first > arr[i]) && (first < second))){
                first = second;
                second = arr[i];
            } else if(((second > first) && (second < arr[i])) || ((second > arr[i]) && (second < first))){
                second = arr[i];
            }
        }

        cout<<first<<" "<<second<<endl;
    }
    return 0;
}

