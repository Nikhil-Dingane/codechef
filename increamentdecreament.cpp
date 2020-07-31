#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int no;
	cin>>no;

	if((no%4)==0){
	    cout<<no+1<<endl;
	} else {
	    cout<<no-1<<endl;
	}
	return 0;
}
