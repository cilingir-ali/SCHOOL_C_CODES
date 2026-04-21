/*                   BASAMAK TOPLAMI
#include <stdio.h>

int basamakToplam(int x);

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);
    printf("Basamaklari toplami:%d\n",basamakToplam(sayi));
    return 0;
}

int basamakToplam(int x)
{
    if(x==0)
    {
        return 0;
    }else{
        return (x % 10) + basamakToplam(x/10);
    }
}
*/
/*                VOİD FONK. KULLANIMI VE TERSTEN YAZDIRMA

#include <stdio.h>

void tersYazdir(int x);

int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz:\n");
    scanf("%d",&sayi);
    printf("Sayinin tersi:\n");
    tersYazdir(sayi);
    printf("\n");

    return 0;
}

void tersYazdir(int x)
{
    if(x==0)
    {
    return;
    }

    printf("%d", x % 10);

    tersYazdir(x/10);
}
*/
/*                      KELİME UZUNLUGU BULMA
#include <stdio.h>

int uzunlukBulma(char dizi[],int sira);

int main()
{
    char dizi[100];

    printf("Lutfen bir kelime giriniz:\n");
    scanf("%s",dizi);

    int sonuc = uzunlukBulma(dizi,0);
    printf("Kelimenin uzunlugu:%d\n",sonuc);
    return 0;
}

int uzunlukBulma(char dizi[],int sira)
{
    if(dizi[sira]=='\0')
    {
        return 0;
    }
    else{
        return 1 + uzunlukBulma(dizi, sira + 1);
    }
}
*/
