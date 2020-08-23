#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isSimilarOrNot(char a[][11],char b[][11]){
    int cnt = 0;
    for(int i = 0 ; (i < 4) && (cnt < 2) ; i++)
    {
        for(int j = 0 ; (j < 4); j++){
            int k = 0;
            bool flag = true;
            while((a[i][k] != '\0') && (b[j][k] != '\0') ){
                if(a[i][k] != b[j][k]){
                    flag = false;
                    break;
                }
                k++;
            }
            if(flag == true){
                cnt++;
                break;
            }
        }
    }
    return (cnt == 2);
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        char a[4][11] = {'\0'};
        char b[4][11] = {'\0'};

        for(int i = 0; i < 4; i++){
            cin>>a[i];
        }

        for(int i = 0; i < 4; i++){
            cin>>b[i];
        }

        cout<<(isSimilarOrNot(a,b) ? "similar" : "dissimilar")<<endl;
    }
    return 0;
}

