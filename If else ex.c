#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// If Else example
int main ()
{
	int a;
	printf("nhap a: "); scanf("%d",&a);
	if(a%2==0)
		printf("%d la so chan",a);
	else printf("%d la so le",a);
	printf("\n");
	
	// Switch case example
	switch(a)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("yeu");
			break;
		case 5:
		case 6:
		case 7:
			printf("TB");
			break;
		case 8:
		case 9:
			printf("gioi");
			break;
		case 10:
			printf("XS");
			break;
		default:
			printf("\nko co gi de noi");
			
	}
	// If else else if Example
	printf("\n");
	if(a>=1&&a<=4)
		printf("yeu");
	else if(a>=5&&a<=7)
		printf("TB");
	else if(a>=8&&a<=9)
		printf("gioi");
	else if(a==10)
		printf("XS");
	else printf("\nko co gi de noi");
	
	return 0;
}


