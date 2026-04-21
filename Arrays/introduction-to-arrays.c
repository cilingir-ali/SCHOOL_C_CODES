/*
#include <stdio.h>

int main()
{
int i,a,sayi[5];

    for(i=0;i<5;i++)
    {
        printf("Lutfen bir sayi giriniz:\n");
        scanf("%d",&a);
        sayi[i] = a;
    }    
    for(i=0;i<5;i++)
    printf("sayi[%d] = %d\n",i,sayi[i]);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int i,a,dizi[5],toplam = 0;
    float ort;

    for(i=0;i<5;i++)
    {
        printf("Lutfen dizinin terimlerini giriniz:\n");
        scanf("%d",&a);
        dizi[i] = a;
        toplam = toplam + dizi[i];
    }
    ort = (float)toplam / 5;
    printf("Dizinin toplami = %d\nDizinin ortalamasi:%.2f",toplam,ort);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int sayi,a,dizi[5],i;

    for(i=0;i<5;i++)
    {
        printf("Dizinin terimlerini giriniz:\n");
        scanf("%d",&sayi);
        dizi[i] = sayi;
    }
    for(i=4;i>=0;i--)
    {
        printf("%d ",dizi[i]);
    }


    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
int i,dizi[5],sayi,max;

    for(i=0;i<5;i++)
    {
        printf("Dizinin terimlerini giriniz:\n");
        scanf("%d",&sayi);
        dizi[i] = sayi;
        if(i==0)
            max = sayi;
        else
        {
            if(dizi[i]>max)
                max = dizi[i];
        }
    }
    printf("En buyuk sayi: %d",max);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
int i,sayi,dizi[6],cift=0,tek=0;

    for(i=0;i<6;i++)
    {
        printf("Lutfen bir sayi giriniz:\n");
        scanf("%d",&sayi);
        dizi[i] = sayi;
            if(dizi[i]%2==0)
            {
                cift++;
            }
            else if(dizi[i]%2!=0)
            {
                tek++;
            }
    }
    printf("Dizide %d tane cift %d tane tek sayi vardir",cift,tek);

    return 0;
}
*/
