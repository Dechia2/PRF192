#include<stdio.h>
#include<math.h>

void swap(int a, int b)
{
     int temp = a;
     a = b;
     b = temp;
     printf("Swapping a = %d, b = %d\n", a, b);
}
void swap1(int *a, int *b)
{
     int temp = *a;
     *a = *b;
     *b = temp;
     printf("Swapping a = %d, b = %d\n", *a, *b);
}
int main(){
    int a = 3, b = 5;
    printf("Before swap a = %d, b = %d\n", a, b);
    swap1(&a,&b);
    printf("After swap a = %d, b = %d\n", a, b);
    system("pause");
    return 0;
}
