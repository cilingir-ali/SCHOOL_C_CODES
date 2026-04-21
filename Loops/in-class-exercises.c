#include <stdio.h>

int main()
{
/*
    Klavyeden girilen bir sayının asal sayı olup olmadığını bulan bir C programı yazınız.
*/
/*                        TAMAMLANMAMIŞ 
int sayi,sayac=2,asal;
    printf("Lütfen bir sayı giriniz:\n");
        scanf("%d",&sayi);
    while(sayi>sayac)
    {
        if(sayi%sayac!=0)
        {
        sayac++;
        }
        else if(sayi%sayac==0)
            sayi=asal;
    }
    if(sayi==asal)
        printf("%d sayısı asaldır.",asal);
    else if(sayi!=1)
        printf("%d sayısı asal sayıdır.",asal);
    else if(sayi==1 || sayi==0)
        printf("%d sayısı asal değildir.",sayi);
*/
/*
    1 ile 50 arasındaki sayıları yazdırınız.
    Ancak 7’nin katı olan sayılarda döngüyü durdurunuz.
*/
/*
int sayi;
    for(sayi=1;sayi<50;sayi++)
    {
        if(sayi%7==0)
            continue;
        printf("%d,",sayi);
    }
*/
/*
    Klavyeden 10 adet sayı giriniz.
    Bu sayılardan en büyük ve en küçük olanı bulan bir C programı yazınız.
*/
/*int sayilar[10];
    printf("sırasıyla 10 tane sayı giriniz:\n");
        scanf("%d",&sayilar);
*/
/*
    Klavyeden girilen bir sayının basamak sayısını bulan bir C programı yazınız.
    (Örnek: Girdi=2456 → Çıktı=4 basamaklı sayı)
*/
int sayi,basamak=0;
    printf("Bir pozitif bir tam sayı giriniz:\n");
        scanf("%d",&sayi);
    while(sayi>=0)
    {
     sayi/10;
     basamak++;
    }
    printf("%d sayısı %d basamaklıdır",sayi ,basamak);

    return 0;
}
