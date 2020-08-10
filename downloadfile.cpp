#include<iostream>

using namespace std;

int main()
{
    int t,n,k,i,sum,a,b;
    scanf("%d",&t);
   for(i=0;i<t;i++)
    {
       a = b = sum = 0 ;
       cin>>n>>k;
       for(int j = 0; j < n; j++)
       {
           cin>>a>>b;
           if(k>a)
           {
             k = k-a;
             sum = 0;
           }
           else if(k <= a)
           {
               a = a-k;
               sum+=a * b;
               k = 0;
           }
       }
      cout<<sum<<endl;
    }
    return 0;
}
