#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCases = 0;
	cin>>testCases;
	for(int t = 1; t <= testCases; t++){
	    int n = 0;
	    cin>>n;
	    cout<<(n < 10 ? "Thanks for helping Chef!" : "-1")<<endl;
	}
	return 0;
}
