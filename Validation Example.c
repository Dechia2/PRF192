#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void clear(getInt)


int getInt(int min, int max) {
	int value, keeptrying = 1, rc;
	char after;

do {
	printf("Enter a whole number\n"
			"in the range [%d,%d] :  ",
			min, max);
rc = scanf("%d%c",&value, &after);
if (rc == 0) {
	printf("**No input accepted!**\n\n");
	clear();
} else if (after != '\n'){
	printf("**Trailing characters!**\n\n");
	clear();
} else if (value < min || value > max){
	printf("**Out of range!**\n\n");
} else
	keeptrying = 0;
} while (keeptrying == 1);

return value;
}

