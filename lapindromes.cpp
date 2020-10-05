#include<iostream>
using namespace std;

bool isLapindrome(string str){
    int arr[22] = {0};

    for(int i = 0; i < (str.length() / 2); i++){
        arr[str[i] - 97]++;
    }

    int middle = 0;

    if((str.length() % 2) == 0){
        middle = str.length() / 2;
    } else {
        middle = (str.length() / 2) + 1;
    }

    for(int j = middle; j < str.length(); j++){
        arr[str[j] - 97]--;
    }

    int i = 0;

    while((arr[i] == 0) && (i < str.length())){
        i++;
    }

    return (i == str.length());
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        string str;
        cin>>str;
        cout<<(isLapindrome(str) ? "YES" : "NO")<<endl;
    }
    return 0;
}


