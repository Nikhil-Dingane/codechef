#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    int requiredMatches[] = {6,2,5,5,4,5,6,3,7,6};

    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int firstNumber = 0, secondNumber = 0, sum = 0, matchesSum = 0;

        cin>>firstNumber>>secondNumber;

        sum = firstNumber + secondNumber;

        while(sum != 0){
            matchesSum = matchesSum + requiredMatches[sum%10];
            sum = sum / 10;
        }

        cout<<matchesSum<<endl;
    }
    return 0;
}

