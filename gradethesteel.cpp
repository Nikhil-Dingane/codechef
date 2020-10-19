#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    double H,C,T;
	    cin>>H>>C>>T;
	    if(H>50.00 && C<0.7 && T>5600.00)
	    cout<<"10"<<endl;
	    else if(H>50.00 && C<0.7)
	    cout<<"9"<<endl;
	    else if(C<0.7 && T>5600.00)
	    cout<<"8"<<endl;
	    else if(H>50.00 && T>5600.00)
	    cout<<"7"<<endl;
	    else if(H>50.00 || C<0.7 || T>5600.00)
	    cout<<"6"<<endl;
	    else
	    cout<<"5"<<endl;
	}
	return 0;
}
