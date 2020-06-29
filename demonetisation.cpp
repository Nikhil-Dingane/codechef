#include<iostream>
using namespace std;

int main(){

    int testCases = 0;
    cin>>testCases;
    for(int test = 1 ; test <= testCases ; test++){
        int total = 0;
        int coinsAvaialableOf = 0;
        int coins = 0;

        cin>>total;
        cin>>coinsAvaialableOf;

        if(total%2!=0)
		{
			if(total==1)
			{
				coins=1;
			}
			else if(total>coinsAvaialableOf)
			{
				if((total-1)%coinsAvaialableOf==0)
				{
					coins=total/coinsAvaialableOf+1;
				}
				else
				{
					coins=total/coinsAvaialableOf+2;
				}
			}
			else
			{
				coins=2;
			}
		}
		else
		{
			if(total>coinsAvaialableOf)
			{
				if(total%coinsAvaialableOf==0)
				{
					coins=total/coinsAvaialableOf;
				}
				else
				{
					coins=total/coinsAvaialableOf+1;
				}
			}
			else
			{
				coins=1;
			}
		}
		cout<<coins<<endl;
    }
    return 0;
}
