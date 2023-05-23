#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int i, x, n;
float S;
void q1 (int a)
{

    if (a == 1) printf("Thang 01, co 31 ngay\n");
    if (a == 2) printf("Thang 02, co 28 den 29 ngay\n");
    if (a == 3) printf("Thang 03, co 31 ngay\n");
    if (a == 4) printf("Thang 04, co 30 ngay\n");
    if (a == 5) printf("Thang 05, co 31 ngay\n");
    if (a == 6) printf("Thang 06, co 30 ngay\n");
    if (a == 7) printf("Thang 07, co 31 ngay\n");
    if (a == 8) printf("Thang 08, co 31 ngay\n");
    if (a == 9) printf("Thang 09, co 30 ngay\n");
    if (a == 10) printf("Thang 10, co 31 ngay\n");
    if (a == 11) printf("Thang 11, co 30 ngay\n");
    if (a == 12) printf("Thang 12, co 31 ngay\n");
}
void q2 (int a)
{

    if (a < 1) 
    {
        printf("n phai >=1, vui long nhap lai.\n\n");
        return;
    }
        while(i <= a) // voi i = 1, S = 0;
        {
         S = S + 1.0 /(2 * i - 1);
         i++;
        }
        printf("a. S = %f\n", S);

          while(i <= a) // voi i = 1, S = 0;
        {
         S = S + 1.0 /(2 * i);
         i++;
        }
      printf("b. S = %f\n\n", S);
}
int main ()
{
    do
    {
    printf("Hay nhap lua chon:");
    scanf("%d", &x);
    printf("Nhap n:");
    scanf("%d", &n);
    if (x == 1) 
        {
             q1(n);
        }
    if (x == 2) 
        {
            q2(n);
        }
    }   while ( x == 1 || x == 2);
    system("pause");
    return 0;
}
