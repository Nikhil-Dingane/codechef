#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int _;
	scanf("%d", &_);
	char * f = (char *) malloc(1200000);

	while(_--) {
		int n;
		scanf("%d", &n);
		getchar();
		fread(f, 1, 11 * n, stdin);
		int t = 0;
		for (int i = 0; i < 10; i++) {
			int a = 0;
			for (int b = 0; b < n; b++) {
				a ^= f[b * 11 + i];
			}
			if (a > 1)
				a -= '0';
			t += a;
		}
		printf("%d\n", t);
	}
}

