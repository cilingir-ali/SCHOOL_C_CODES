/*                   FAKTORİYEL HESAPLAMA
#include <stdio.h>

int fakt(int x);

int main(){

    int n;
    printf("faktoriyel almak istediginiz sayiyi giriniz:\n");
    scanf("%d",&n);
    printf("Sonuc:%d\n",fakt(n));
    return 0;
}

int fakt(int x)
{
    if(x<=0){
        return 1;
    }
    else{
        return x * fakt(x-1);
    }
}
*/
/*                  US ALMA
#include <stdio.h>

float usAlma(float x,float y);

int main()
{
    float taban,us;
    printf("Sirasiyla taban ve ussu giriniz:\n");
    scanf("%f %f",&taban,&us);
    printf("Sonuc:%.3f\n",usAlma(taban,us));
    return 0;
}

float usAlma(float x,float y)
{
    if(y==0)
    {
        return 1;
    }
    return x * usAlma(x, y-1);
}
*/
/*             FİBONACCİ TERİM SAYİSİNA GÖRE SAYİYİ BULMA
#include <stdio.h>

int fib(int x);

int main()
{
    int n;
    printf("Fibonacci sayisinin terimini giriniz:\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Terim sayisi negatif olamaz!\n");
    }else{
    printf("%d. siradaki sayi:%d\n",n,fib(n));
    }

    return 0;
}

int fib(int x)
{
   if(x==0)
   {
    return 0;
   }
   else if(x==1)
   {
    return 1;
   }
   else{
    return fib(x-2) + fib(x-1);
   }
}
*/
/*
#include <stdio.h>

int diziToplam(int dizi[],int n);

int main()
{
    int i,n;
    printf("Lutfen dizinin terim sayisini giriniz:\n");
    scanf("%d",&n);

    int deneme[n];

    for(i=0;i<n;i++)
    {
    printf("Sirasiyla dizinin terimlerini giriniz:\n");
    scanf("%d",&deneme[i]);
    }
    printf("Dizinin terimleri toplami:%d\n",diziToplam(deneme,n));
    return 0;
}

int diziToplam(int dizi[],int n)
{
    if(n<=0)
    {
        return 0;
    }
    else{
        return dizi[n-1] + diziToplam(dizi, n-1);
    }
}
*/
