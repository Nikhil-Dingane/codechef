#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, m = 0,k = 0;

        cin>>n>>m;

        int arr[n] = {0};
        bool flag = true;

        for(int i = 0 ; i < m ; i++){
            cin>>k;
            arr[k-1]++;
            for(int j = 0 ; j < n ; j++){
                if((j != (k - 1)) && ((arr[k -1] - arr[j]) > 1)){
                    flag = false;
                    break;
                }
            }
        }
        cout<<(flag ? "YES" : "NO")<<endl;
    }
    return 0;
}

