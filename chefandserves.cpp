#include<iostream>
using namespace std;

string getWinner(int p1, int p2, int k){
    int c = p1 + p2;
	    if(c%k == 0){
	        c=c/k+1;
	        if(c%2==0){
	            return "COOK";
	        }
	        else{
	            return "CHEF";
	        }
	    } else {
	        c = c / k;

	        if( c%2 == 1){
	            return "COOK";
	        } else {
	            return "CHEF";
	        }
	    }
}

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int p1 = 0, p2 = 0, k = 0;
        cin>>p1>>p2>>k;
        cout<<getWinner(p1,p2,k)<<endl;
    }
    return 0;
}

