#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int n = 0, m = 0, k = 0;
        cin>>n;
        for(int i=1;i<=n;i=i+2)
	    {
	        k=n-i+1;
	        m+=(k*k);
	    }

	    cout<<m<<endl;
    }
    return 0;
}

