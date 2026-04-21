#include <stdio.h>

float ortalamaHesapla(int notlar[],int n);
int basariliOgrenciSayisi(int notlar[], int n, int gecmeNotu);
void yuksekNotlar(int notlar[],int n, int esikDeger);

int main()
{
    int notlar[100],n,i;
    printf("Ogrenci sayisini giriniz:\n");
    scanf("%d",&n);
    printf("Sirasiyla notlari giriniz:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",notlar[i]);
    }

    printf("Not ortalamasi:%f\n",ortalamaHesapla(notlar,n));


    return 0;
}

float ortalamaHesapla(int notlar[],int n)
{
    int i;
    int toplam = 0;
    
    for(i=0;i<n;i++)
    {
        toplam += notlar[i];
    }

    return (float)toplam / n;
}
