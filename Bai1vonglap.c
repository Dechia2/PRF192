#include<stdio.h>
#include<math.h>
//Viet chuong trinh S, voi k nguyen duong nhap tu ban phim

int tong(int a){
    int s = 1;
    int i;
        for(i = 2;i<=a;i++)s = s + pow(i,2);
        return s;
}

int main(){
    int k;
    int i;
    printf("Nhap gia tri k =");
    scanf("%d", &k);
    
    float s = 1.0;
    for(i = 2;i<=k;i++){
          if(i%2==0)s=s-1/(float)tong(i);
          else s = s+1/(float)tong(i);
}
    printf("Ket qua = %f\n", s);
    system("pause");
    return 0;
}

//In ra man hinh thap tang dan



int main() {
   int a, b, rows;
   printf("Nhap rows: ");
   scanf("%d", &rows);
   for (a = 1; a <= rows; ++a) {
      for (b = 1; b <= a; ++b) {
         printf("* ");
      }
      printf("\n");
   }
   system("pause");
   return 0;
}

//In ra man hinh thap nguoc


int main() {
   int a, b, rows;
   printf("Nhap rows: ");
   scanf("%d", &rows);
   for (a = rows; a >= 1; --a){
       for ( b = 1; b <= a; ++b){
           printf("* ");
       }
       printf("\n");
   }
   system("pause");
   return 0;
}  

//In ra man hinh thap so
int main() {
   int a, b, rows;
   printf("Nhap rows: ");
   scanf("%d", &rows);
   for (a = 1; a <= rows; ++a) {
      for (b = 1; b <= a; ++b) {
         printf("%d ", b);
      }
      printf("\n");
   }
   system("pause");
   return 0;
}

//In ra man hinh thap day du
int main(){
     int a, space, rows, n = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (a = 1; a <= rows; ++a, n = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (n != 2 * a - 1) {
         printf("* ");
         ++n;
      }
      printf("\n");
   }
   system("pause");
   return 0;
}


        
