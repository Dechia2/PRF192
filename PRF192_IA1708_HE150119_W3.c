#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int a, b, c;

char menu ()
{
    printf("**********************************************************\n");
    printf("*           Date           :      10/08/2022             *\n");
    printf("*           Student Name   :      Nguyen Van A           *\n");
    printf("*           Student ID     :      HE17                   *\n");
    printf("**********************************************************\n");
    printf("**********************************************************\n");
    printf("*     Please select the number for appropritate task     *\n");
    printf("*                 [1]. NUMERALS                          *\n");
    printf("*                 [2]. GEOMETRY                          *\n");
    printf("*                 [3]. INFORMATION                       *\n");
    printf("*                 [4]. EXIT                              *\n");
    printf("**********************************************************\n");
    fflush(stdin);
    return getch();
}

void N1 ()
{
    int s1, s2;
    int tong;
    printf("Nhap so thu nhat = ");
    scanf("%d",&s1);
    printf("Nhap so thu hai = ");
    scanf("%d",&s2);
    tong = s1 + s2;
        printf("%d\n", tong);
        printf("__________________________________________________________\n");
}

void N2 ()
{
    int s1, s2;
    int hieu;
    printf("Nhap so thu nhat = ");
    scanf("%d",&s1);
    printf("Nhap so thu hai = ");
    scanf("%d",&s2);
    hieu = s1-s2;
        printf("%d\n", hieu);
        printf("__________________________________________________________\n");
}

void N3 ()
{
    int s1, s2;
    int tich;
    printf("Nhap so thu nhat = ");
    scanf("%d",&s1);
    printf("Nhap so thu hai = ");
    scanf("%d",&s2);
    tich = s1*s2;
        printf("%d\n", tich);
        printf("__________________________________________________________\n");
}

void N4 ()
{
    int s1, s2;
    int thuong;
    printf("Nhap so thu nhat = ");
    scanf("%d",&s1);
    printf("Nhap so thu hai = ");
    scanf("%d",&s2);
    thuong = s1/s2;
        printf("%d\n", thuong);
        printf("__________________________________________________________\n");
}

void G1 ()
{
    float a, b, p, s;
    printf("Nhap chieu rong canh a: ");
    scanf("%f",&a);
    printf("Nhap chieu dai canh b: ");
    scanf("%f",&b);
    if((a > 0) && (b > 0))
    {
        s = a * b;
        p = (a + b ) * 2;
        printf("Chu vi hinh chu nhat la: %.2f\n",p);
        printf("Dien tich hinh chu nhat la: %.2f\n", s);
        printf("__________________________________________________________\n");
    }
    else
    {
        printf("Hinh chu nhat khong hop le.\n");
        printf("__________________________________________________________\n");
    }
}

void G2 ()
{
    int u = 0;
    int c, s, m;
    int h;
    printf("Nhap so do day hinh binh hanh:");
    scanf("%d",&c);
    printf("Nhap so do chieu cao hinh binh hanh:");
    scanf("%d",&h);
    s = c*h;
    printf("Dien tich hinh binh hanh la : %d\n", s);
    m = 2*c+2*h;
    printf("chu vi hinh binh hanh la : %d\n", m);
    printf("__________________________________________________________\n");
}

void G3 ()
{
    int a, b, c, S, CV, p;
        printf("Nhap a = ");
        scanf("%d",&a);
        printf("Nhap b = ");
        scanf("%d",&b);
        printf("Nhap c = ");
        scanf("%d",&c);
        CV = a+b+c;
        p = CV/2;
        S = sqrt(p*(p-a)*(p-b)*(p-c));
        if ((a+b>c) && (a+c>b) && (b+c>a))
        {
            printf("Chu vi hinh tam giac la: %d\n", CV);
            printf("Dien tich hinh tam giac la: %d\n", S);
        }
        else
        {
            printf("Do dai ba canh tam giac khong hop le.");
        }
        printf("__________________________________________________________\n");
}

void G4 ()
{
    int r;
    float chuvi, dientich;
    printf("Nhap ban kinh r:");
    scanf("%d", &r);
    chuvi = 2*3.14*r;
    dientich = 3.14*r*r;
    printf("Chu vi hinh tron la: %f\n", chuvi);
    printf("Dien tich hinh tron la: %f", dientich);
}

void I1 (int n)
{
    int mang[1000];
    int i = 0;
    printf("Nhap so can chuyen doi:");
    scanf("%d", &n);
    while (n > 0)
    {
        mang[i] = n % 2;
        n = n / 2;
        i++;
    }
    int j = 0;
	for (j = i - 1; j >= 0; j--)
    {
        printf("%d", mang[j]);        
    }
        printf("\n__________________________________________________________\n");
}

void I2 (int n)
{
    int mang[1000];
    int i = 0;
    printf("Nhap so can chuyen doi:");
    scanf("%d", &n);   
    while (n > 0)
    {
        mang[i] = n % 8;
        n = n / 8;
        i++;
    }
    int j = 0;
	for (j = i - 1; j >= 0; j--)
    {
        printf("%d", mang[j]);        
    }
        printf("\n__________________________________________________________\n");    
}

void I3 (int n)
{
    int mang[1000];
    int i = 0;
    printf("Nhap so can chuyen doi:");
    scanf("%d", &n);   
    while (n > 0)
    {
        mang[i] = n % 16;
        n = n / 16;
        i++;
    }
    int j = 0;
	for (j = i - 1; j >= 0; j--)
    {
        printf("%d", mang[j]);        
    }
        printf("\n__________________________________________________________\n");
}

char mNUMERALS ()
{
    printf("**********************************************************\n");
    printf("*                        NUMERALS                        *\n");
    printf("*                 [1]. Addition                          *\n");
    printf("*                 [2]. Subtraction                       *\n");
    printf("*                 [3]. Multiplication                    *\n");
    printf("*                 [4]. Division                          *\n");
    printf("*                 [5]. Back                              *\n");
    printf("**********************************************************\n");
    fflush(stdin);
    return getch();
}

void NUMERALS ()
{
    char uscn;
    do
    {
        system("cls");
        uscn = mNUMERALS ();
    switch (uscn)
    {
    case '0':
    default: mNUMERALS ();
    printf("Vui long nhap lua chon hop le\n");
    system("pause");
    case '1': N1 ();
    break;
    case '2': N2 ();
    break;
    case '3': N3 ();
    break;
    case '4': N4 ();
    break;
    case '5':
    {
        system("cls");
        menu ();
    }
    break;
    }
    } while(uscn < '1' || uscn > '5');
    system("pause");
}

char mGEOMETRY ()
{
    printf("**********************************************************\n");
    printf("*                        GEOMETRY                        *\n");
    printf("*                 [1]. Rectangle                         *\n");
    printf("*                 [2]. Parallelogram                     *\n");
    printf("*                 [3]. Triangle                          *\n");
    printf("*                 [4]. Circle                            *\n");
    printf("*                 [5]. Back                              *\n");
    printf("**********************************************************\n");
    fflush(stdin);
    return getch();
}

void GEOMETRY ()
{
    char uscg;
    do
    {
        system("cls");
        uscg = mGEOMETRY ();
    switch (uscg)
    {
    case '0':
    default: mGEOMETRY ();
    printf("Vui long nhap lua chon hop le\n");
    system("pause");
    case '1': G1 ();
    break;
    case '2': G2 ();
    break;
    case '3': G3 ();
    break;
    case '4': G4 ();
    break;
    case '5':
    {
        system("cls");
        menu ();
    }
    break;
    }
    } while(uscg < '1' || uscg > '5');
    system("pause");
}

char mINFORMATION ()
{
    printf("**********************************************************\n");
    printf("*                     INFORMATION                        *\n");
    printf("*                 [1]. DEC to BIN                        *\n");
    printf("*                 [2]. Dec to OCT                        *\n");
    printf("*                 [3]. DEC to HEX                        *\n");
    printf("*                 [4]. Back                              *\n");
    printf("**********************************************************\n");
    fflush(stdin);
    return getch();
}

void INFORMATION ()
{
    char usci;
    do
    {
        system("cls");
        usci = mINFORMATION ();
    switch (usci)
    {
    case '0':
    default: mINFORMATION ();
    printf("Vui long nhap lua chon hop le\n");
    system("pause");
    case '1': I1 (c);
    break;
    case '2': I2 (c);
    break;
    case '3': I3 (c);
    break;
    case '4':
    {
        system("cls");
        menu ();
    }
    break;
    }
    } while(usci < '1' || usci > '4');
    system("pause");
}

int main ()
{

    char chon;
    do
    {
        system("cls");
        chon = menu ();
        switch (chon)
        {
        case '0':
        default:
        printf("Vui long nhap lua chon hop le\n");
        system("pause");
        case '1':
        {
            NUMERALS ();
            break;
        }
        case '2':
        {
            GEOMETRY ();
            break;
        }
        case '3':
        {
            INFORMATION ();
            break;
        }
        case '4': exit (0);
        }
    }   while(chon == '1' || chon == '2' || chon == '3' || chon == '4');
    system("pause");
    return 0;
}


