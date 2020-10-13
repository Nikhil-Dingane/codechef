#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t,x1,x2,x3,v1,v2;
    double c,f;
    cin>>t;
    while(t--)
    {
        cin>>x1>>x2>>x3>>v1>>v2;
        c = (float)(x3-x1)/v1;
        f = (float)(x2-x3)/v2;
        if(c>f)
          cout<<"Kefa\n";
        else if(c==f)
          cout<<"Draw\n";
        else
          cout<<"Chef\n";
    }
}
