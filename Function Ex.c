#include<stdio.h>
#include<math.h>



void calSum(int a, int b)
{
printf("Sum = %d\n", a + b);  
}

int calSum1(int a, int b)
{
 int S = a + b;
 return S;
}


int main(){
    int x = 3, y = 4;
    calSum(x,y);
    int Sum1 = calSum1(x,y);
    printf("Sum1 = %d\n", Sum1); //printf("Sum1 = %d\n", calSum1(x,y));
    calSum1(x,y);
    system("pause");
    return 0;
}
