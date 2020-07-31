#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t,c=0;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        for(int i=0;i<l-1;i++){
            if((s[i]=='c' && s[i+1]=='h')||(s[i]=='h' && s[i+1]=='e')||(s[i]=='e' && s[i+1]=='f')){
                c++;
                break;
            }
        }
    }
        printf("%d\n",c);
	return 0;
}

