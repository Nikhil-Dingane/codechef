#include <stdio.h>

int main(void) {
	// your code goes here
	int n,r;
	scanf("%d %d",&n,&r);
	if(n>=1 && n<=1000 && r>=1300 && r<=1501)
	{
		int R[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&R[i]);
				if(R[i]<=1300 && R[i]>=1501)
					break;
		}
		for(i=0;i<n;i++)
		{
			if(R[i]<r)
				printf("\nBad boi");
			else
				printf("\nGood boi");
		}
	}
	return 0;
}
