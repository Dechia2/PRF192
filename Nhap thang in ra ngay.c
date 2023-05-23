#include<stdio.h>
#include<math.h>
int main(){
    int t, n;
    printf("Nhap thang: ");
    scanf("%d", &t);
    
    printf("Nhap nam: ");
    scanf("%d", &n);
    
    int soNgay;
    
    
    switch(t)
{   case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
         soNgay = 31;
         break;
    case 4:
    case 6:
    case 11:
         soNgay = 30;
         break;
    case 2:
         if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)){
                 soNgay = 29;
         }else{
               soNgay = 28;
         }
         break;
    default: 
             printf("Thang khong hop le\n");
             return 0;
}
    printf("Thang %d nam %d co %d ngay.\n", t, n, soNgay);
    system("pause");
    return 0;
}
