#include <bits/stdc++.h>
#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	string s;
	cin >> t;
	while(t--)
	{
		cin >> s;
		int c=0;
		for(int i=0;i<s.size();i++)
		{
			int sc=0,oc=0;
			for(int j=0;j<s.size();j++)
			{
				if(s[i]==s[j]) sc++;
				else oc++;
			}
			if(sc==oc)
			{
				c++;
				break;
			}
		}
		if(c!=0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
