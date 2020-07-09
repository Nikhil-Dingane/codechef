#include <stdio.h>

int main(void) {
	int t, n, occurencerOfJ, maxOccurence;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
	    scanf("%d", &n);
	    int array[n];
	    for (int j = 0; j < n; j++)
	        scanf("%d", &array[j]);

	    maxOccurence = 0;
	    for (int j = 1; j <= 100; j++) {
	        occurencerOfJ = 0;
	        for (int k = 0; k < n; k++) {
	            if(array[k] == j)
	                occurencerOfJ++;
	        }
	        if (occurencerOfJ > maxOccurence)
	            maxOccurence = occurencerOfJ;
	    }
	    printf("%d\n", n - maxOccurence);
	}
	return 0;
}

