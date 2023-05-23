#include <stdio.h>
#include <conio.h>
#include <math.h>

//Cau 1
int main ()
{
    printf("Date           :      10/08/2022\n");
    printf("Student Name   :      Nguyen Van A\n");
    printf("Student ID     :      HE17**\n\n");
    


//Cau 2
int s1,s2;
int tong,hieu,tich,thuong;
	scanf("%d%d", &s1, &s2);
	tong = s1+s2;
	hieu = s1-s2;
	tich = s1*s2;
	thuong = s1/s2;
	printf("%d\n", tong);
	printf("%d\n", hieu);
	printf("%d\n", tich);
	printf("%d\n\n", thuong); 
	

//Cau 3
float ndC, ndF;
	printf("Input a temperature (in Centigrade) :");
	scanf("%f", &ndC);
	ndF = (1.8 * ndC) + 32;
	printf("%f degrees Fahrenheit\n\n", ndF);
	



//Cau 4


int hour, minutes;
int sum;
int htm;
	printf("Input hour:");
	scanf("%d", &hour);
	printf("Input minutes:");
	scanf("%d", &minutes);
	htm = hour * 60;
	sum = htm + minutes;
	printf("Total minutes: %d\n\n", sum);
	


//Cau 5
int a, b, c, S, CV, p;
    printf("Nhap a = ");
    scanf("%d",&a);
    printf("Nhap b = ");
    scanf("%d",&b);
    printf("Nhap c = ");
    scanf("%d",&c);
    CV = a+b+c;
    printf("Chu vi hinh tam giac la: %d\n",CV);
    p = CV/2; 
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Dien tich hinh tam giac la: %d\n\n",S);
	
int r;
	float chuvi, dientich;
	printf("Nhap ban kinh r:");
	scanf("%d", &r);
	chuvi = 2*3.14*r;
	dientich = 3.14*r*r;
	printf("Chu vi hinh tron la: %f\n", chuvi);
	printf("Dien tich hinh tron la: %f", dientich);
	
	return 0;
}
