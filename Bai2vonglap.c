#include<stdio.h>
#include<math.h>
//Ve tam giac sao deu

int main() {
   int h,a,b;
 
   h = 6;   
 
   printf("Ve tam giac sao deu:\n");
   for(a = 1; a <= h; a++) {
      for(b = 1; b <= h-a; b++)
         printf(" ");
 
      for(b = 1; b <= a; b++)
         printf("* ");
 
      printf("\n");
   }
   system("pause");
   return 0;
}

//Ve tam giac sao deu nguoc
int main() {
   int h,a,b;
 
   h = 6;
 
   printf("Ve tam giac sao deu:\n");
   for(a = 1; a <= h; a++) {
      for(b = 1; b < a; b++)
         printf(" "); 
 
      for(b = a; b <= h; b++)
         printf("* ");
 
      printf("\n");
   }
   system("pause"); 
   return 0;
}
