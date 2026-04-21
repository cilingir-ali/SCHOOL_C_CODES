//MATRİSİN SATIR SATIR YAZDIRILMASI
/*
#include <stdio.h>

int main()
{
    int i,j,A[3][3]={{4,8,12},{51,73,54},{40,60,71}};;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
    printf("\n");
    }

    return 0;
}
*/
//MATRİSİN SÜTUN SÜTUN YAZDIRILMASI
/*
#include <stdio.h>

int main()
{
    int i,j,A[3][3]={{4,8,12},{51,73,54},{40,60,71}};;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",A[j][i]);
        }
    printf("\n");
    }

    return 0;
}
*/
//FONKSİYONLAR
/*
#include <stdio.h>
#include <math.h>

int main()
{
    printf("%lf\n",sqrt(900.00)); //karekökünü alma
    printf("%lf\n",cbrt(27)); // küp kök alma
    printf("%lf\n",fabs(-34)); // mutlak değer
    printf("%lf\n",ceil(-9.8)); // bir üst tam sayıya atama
    printf("%lf\n",pow(2,6)); // kuvvet alma

    return 0;
}
*/
//1- declaration(geri dönüş değeri(int,float,void) 
//Fonksiyona bir okunabilir ad, parametreler tanımlanmalı)
//2- Bildirim
#include <stdio.h>

int Topla(int x, int y);
float Topla_float(float a, float b, float c);
//Bildirim
int Topla(int x,int y)
{
    return x + y;
}
float Topla_float(float a, float b , float c)
{
    return a + b + c;
}
int main()
{
    printf("%d\n", Topla(5,4));
    printf("%d\n", Topla(90,80));
    printf("%lf\n", Topla_float(5.90, 4.897, 9.6544));
}
