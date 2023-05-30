#include<stdio.h>
#include<math.h>
//Calculate S = 0, n<=0
//n + (n-2) + (n-4) +... + 0
int main(){
    int n,i;
    printf("n=");
    scanf("%d", &n);
    int S = 0;
    i = n;
    while (i>0){
          S += i; //S = S + i
          i = i - 2; } //i -= 2
    printf("S=%d\n", S);
    
    system("pause");
    return 0;
}
