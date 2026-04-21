#include <stdio.h>

int main(){
//   Soru 1 Klavyeden bir tamsayı giriniz.
//   Girilen sayıdan küçük olan 1 ile 100 arasındaki tüm çift sayıları ekrana listeleyen bir C programı yazınız.
/*    
    int a=1,sayi;
        printf("lütfen ekrana bir sayı giriniz:\n");
            scanf("%d",&sayi);
    while(((a<sayi) && (sayi>0)) && (sayi<100) ){
        if(a%2==0)
            printf("%d,",a);
        ++a;
    }
if((sayi<0) || (sayi>100))
    printf("gecersiz giris");
*/
//    Soru 2
//    Klavyeden girilen sayının pozitif, negatif veya sıfır olduğunu ekrana yazdıran bir C programı yazınız.
/*    
    int sayi;
        printf("lütfen bir sayı giriniz:\n");
            scanf("%d",&sayi);
    if(sayi<0)
        printf("%d sayısı negatiftir",sayi);
    else if(sayi>0)
        printf("%d sayısı pozitiftir",sayi);
    else{
        printf("sayi sifirdir");
    }
*/

// Soru 3
//  Klavyeden girilen bir sayının faktöriyelini hesaplayan bir C programı yazınız.
//   (Örnek: Girdi=5 → Çıktı=120)

/*        
    int a=1,sayi,fakt=1;
        printf("bir sayı giriniz:\n");
            scanf("%d",&sayi);
    while(sayi>=a)
    {
    fakt = fakt * a;
    ++a;
    }
    printf("sayinin faktoriyeli: %d",fakt);
*/

//  Soru 4
//  1 ile 100 arasındaki tüm sayıları ekrana yazdırınız,
//  ancak 3’e bölünebilen sayılar yerine “Fizz”, 5’e bölünebilen sayılar yerine “Buzz”, her ikisine de bölünebilen sayılar yerine “FizzBuzz” yazdıran bir program yazınız.

/*
    int a;
    for(a=1;a<100;++a){
        if((a%3==0)&&(a%5==0))
            printf("%d sayısı FizzBuzz\n",a);
        else if(a%3==0)
            printf("%d sayısı Fizz\n",a);
        else if(a%5==0)
            printf("%d sayısı Buzz\n",a);
    }
*/
//  Soru 5
//  Klavyeden iki sayı alınız.
//  Bu iki sayı arasındaki tek sayıları ekrana yazdıran bir C programı yazınız.
/*

    int sayi1,sayi2,i;
        printf("lütfen birbirinden farklı iki tane sayı giriniz:\n");
            scanf("%d %d",&sayi1,&sayi2);
    if(sayi1<sayi2)
    {
        for(int i = sayi1+1;i<sayi2;i++)
        {
            if(i%2!=0)
                printf("%d",i);
        }
    }
    else if(sayi1>sayi2)
    {
        for(int i= sayi2+1; i<sayi1; i++)
        {
            if(i%2!=0)
                printf("%d",i);
        }
    }
    else{
        printf("gecersiz giris sayılar aynı olamaz");
    }
*/
//  Soru 6
//  Klavyeden girilen bir sayının asal sayı olup olmadığını bulan bir C programı yazınız.
//  (İpucu: 2’den başlayarak sayının kendisine kadar bölünebilirliğini kontrol ediniz.)

    int sayi,i,asal=1;
        printf("bir sayı giriniz:\n");
            scanf("%d",&sayi);
    if(sayi<=1)
    {
        printf("sayı asal değildir.\n");
        return 0;
    }   

    return 0;
}
