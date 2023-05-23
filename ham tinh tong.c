#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//ham tinh tong co gia tri tra ve
//ham khong co gia tri tra ve dung Void
float Tong(float a, float b)
{
	float s = a + b;
	return s;
}
void tong(float a, float b)
{
	float s = a +  b;
	printf("\ntong la: %f",s);
}
void ktcl(int a)
{
	if (a%2==0)
		printf("\n%d la so chan", a);
	else printf("\n%d la so le",a);
}
int main ()

{
	float x,y;
	scanf("%f", &x);
	scanf("%f", &y);
	float T = Tong(x,y);
	tong(x,y);
	printf("\ntong la: %f",T);
	ktcl(x);
	ktcl(y);
	ktcl(T);
	return 0; 

}



