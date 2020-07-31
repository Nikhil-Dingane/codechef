#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, x = 0, y = 0;
        cin>>n;
        int res = 0;
        for(n; n > 0; n--)
		{
			cin>>x>>y;
			res = res^n;
		}
		cout<<res<<endl;
    }
    return 0;
}

