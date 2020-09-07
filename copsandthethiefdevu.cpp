#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m,x,y;
	    cin>>m>>x>>y;
	    int h[m];
	    for(int i=0; i<m; i++)
	    {
	        cin>>h[i];
	    }
	    sort(h,h+m);
	    int p[m+1];
	    p[0]=h[0]-1;
	    p[m]=100-h[m-1];
	    for(int i=1; i<m; i++)
	    {
	        p[i]=h[i]-h[i-1]-1;
	    }
	    int sum=0;
	    if(p[0]>x*y)
	    sum=sum+ (p[0]-x*y);
	    if(p[m]>x*y)
	    sum=sum+ (p[m]-x*y);
	    for(int i=1; i<m; i++)
	    {
	        if(p[i]>2*x*y)
	        sum=sum+(p[i]-2*x*y);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
