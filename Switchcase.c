#include<stdio.h>
#include<math.h>
int main(){
    double num1, num2, result;
    char  op;
    printf("Enter expression(+ - * /): ");
    scanf("%lf%c%lf", &num1, &op, &num2);
    
    switch(op)
    {
              case '+' : result = num1 + num2; 
              printf("result:%.3lf\n", result);
              break;
              
              case '-' : result = num1 - num2;
              printf("result:%.3lf\n", result);
              break;
              
              case '*' : result = num1 * num2;
              printf("result:%.3lf\n", result);
              break;
              
              case '/' : if ( num2 == 0)
                   printf("divide by 0");
              else
              { result = num1 / num2;
                printf("result:%.3lf\n", result);
                }
                break;
              default: printf("op is not supported\n");
              }     
              
    
    system("pause");
    return 0;
}
