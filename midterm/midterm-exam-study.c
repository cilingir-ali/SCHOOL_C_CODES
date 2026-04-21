#include <stdio.h>

int main()
{
/*    
int sayi,a=1,fak=1;
    printf("lütfen bir sayı giriniz:\n");
        scanf("%d",&sayi);
  while(sayi>=a && a>=0)
  {
    fak = fak*a;
    ++a;
  }  
  printf("sayının fak: %d",fak);
*/
/*
int sayi1,sayi2,a;
    printf("lutfen birbirinden farklı iki sayi giriniz:\n");
        scanf("%d %d",&sayi1,&sayi2);
   if(sayi1>sayi2)
   {
    for(a=sayi2;a<sayi1;a+=2)
        {
            if(sayi2%2==0)
            sayi2++;
            printf("%d,",a);
        }
    }
    else if(sayi2>sayi1)
    for(a=sayi1;a<sayi2;a+=2)
    {
        if(sayi1%2==0)
        sayi1++;
        printf("%d,",a);
    }
    else
    {
        printf("sayılar aynı olamaz.");
    }
*/
/*
    int sayi,a,asal=1;
        printf("Lutfen bir sayi giriniz:\n");
            scanf("%d",&sayi);
    if(sayi<=1)
    {
        asal=0;
    }
    else
    {
        for(a=2;a<=sayi/2;++a)
        {
            if(sayi%a==0)
            {
                asal=0;
                break;
            }
        }       
    }
    if(asal==0)
        printf("%d sayisi asal degildir",sayi);
    else if(asal==1)
        printf("%d sayisi asal sayidir",sayi);
*/
/* 
int a;
    for(a=1;a<50;++a)
    {
        if(a%7==0)
            continue;
        printf("%d,",a);
    } 
*/
/*                      10 TANE SAYIDAN EN BÜYÜK VE KÜÇÜĞÜNÜ YAZDIRMA
int a,sayi;
int enbuyuk,enkucuk;
    printf("1. sayiyi giriniz:\n");
        scanf("%d",&sayi);
        enbuyuk=sayi;
        enkucuk=sayi;
    for(a=2;a<=10;a++)
    {
        printf("%d. sayiyi giriniz:\n",a);
            scanf("%d",&sayi);
        if(sayi>enbuyuk)
            enbuyuk = sayi;
        else if(sayi<enkucuk)
            enkucuk = sayi;
    }              
    printf("%d en buyuk sayidir\n%d en kucuk sayidir",enbuyuk,enkucuk);
*/
/*
int sayi,gecici,i;
    printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
    gecici=sayi;
    for(i=0;sayi>0;i++)
    {
    sayi=sayi/10;
    }
    printf("%d sayisinin basamak sayisi:%d",gecici,i);
*/
/*
int sayi,ters=0,kalan,a;
    printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
    a=sayi;
    while(sayi!=0)
    {
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
        sayi = sayi/10;
    }
    printf("%d sayisinin tersi %d sayisidir",a,ters);
*/
/*
int sayi,ters=0,kalan;
    printf("Birt sayi giriniz:\n");
        scanf("%d",&sayi);
    int orijinal=sayi;
    while(sayi!=0)
    {
        kalan = sayi % 10;
        ters = (ters * 10) + kalan;
        sayi = sayi/10;
    }
    if(orijinal==ters)
        printf("%d sayisi palindromdur",orijinal);
    else 
    {
        printf("%d sayisi palindrom degildir",orijinal);
    }
*/
/*
char ch;
    printf("lutfen bir karakter giriniz:\n");
        scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<= 'z'))
    {
        printf("%c bir harftir.\n",ch);
    }
    else if(ch>='0' && ch<='9')
    {
            printf("%c bir rakamdir",ch);
    }
    else 
    {
        printf("%c ozel bir karakterdir",ch);
    }
*/
/*
int sayi,kalan,orijinal,toplam=0;
    printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
    orijinal = sayi;
    while(sayi>0)
    {
    kalan = sayi % 10;
    toplam = toplam + (kalan * kalan * kalan);
    sayi = sayi/10;
    }
    if(toplam==orijinal)
        printf("%d sayisi armstrong sayisidir",orijinal);
    else if(toplam!=orijinal)
        printf("%d sayisi armstrong sayisi degildir",orijinal);
*/
/*
int n,i;
int t1=0,t2=1;
int sonrakiterim;
    printf("Fibonacci serisi icin terim sayisi giriniz:\n");
        scanf("%d",&n);
    printf("Fibonacci serisi (%d terim) ",n);

    for(i=0;i<n;i++)
    {
        printf("%d",t1);

    if(i<n)
     {
        printf(", ");
     }
    sonrakiterim = t1 + t2;
    t1 = t2;
    t2 = sonrakiterim;
    }
    printf("\n");
*/
/*
int sayi,i,asal=1;
    printf("Lutfen bir sayi giriniz:\n");
        scanf("%d",&sayi);
    if(sayi<=0)
    {
        asal=0;
    }
    else {
        for(i=2;i<sayi;i++)
        {
          if(sayi%i == 0)
          {
           asal=0;
           break; 
          }  
        }
    }
    if(asal==1)
        printf("%d sayisi asaldir",sayi);
    else if(asal==0)
        printf("%d sayisi asal degildir",sayi);
*/
/*
int sayi,i,toplam=0;
    printf("Lutfen bir sayi giriniz:\n");
        scanf("%d",&sayi);
    i=1;    
    while(i < sayi)
    {
        if(sayi%i==0)
        {
            toplam = toplam + i;
        }
            i++;    
    } 
    if(toplam==sayi)
        printf("%d sayisi mukemmel sayidir.",sayi);
    else
    {
        printf("%d sayisi mukemmel sayi degildir",sayi);
    }       
*/
/*
int sayi1,sayi2,ebob,ekok;
int i;
    printf("Lutfen birinci sayi giriniz:\n");
        scanf("%d",&sayi1);
    printf("Lutfen ikinci sayiyi giriniz:\n");
        scanf("%d",&sayi2);
            for(i=1; i <= sayi1 && i <= sayi2;++i)
        {
            if(sayi1%i==0 && sayi2%i==0)
            {
                ebob=i;
            }
        }
    ekok = (sayi1 * sayi2)/ ebob;
        printf("Iki sayinin ebobu:%d\n",ebob);
        printf("Iki sayinin ekoku:%d\n",ekok);
*/
/*  
int sayi1,sayi2,ebob,ekok;
int i;
    printf("birinci sayiyi giriniz:\n");
        scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz:\n");
        scanf("%d",&sayi2);
    for(i=1;i<=sayi1 && i<=sayi2 ;++i)
    {
        if(sayi1%i==0 && sayi2%i==0)
        {
                    ebob=i;
        } 
    }
    ekok= sayi1 * sayi2 / ebob;
    printf("Ebob:%d\n",ebob);
    printf("Ekok:%d\n",ekok);
*/ 
/*  
int sayi,ters=0,kalan,i;
    printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
    i=sayi;
    while(sayi!=0)
    {
    kalan = sayi % 10;
    ters = ters * 10 + kalan;
    sayi = sayi/10;
    }
    if(i==ters)
        printf("sayi palindrom");
    else if (i!=ters)
    {
        printf("sayi palindrom degil");
    }
*/
/*
int sayi,i,toplam=0;
    printf("Bir sayi giriniz:\n");
        scanf("%d",&sayi);
    i=1;
    while(i<sayi)
    {
     if(sayi%i==0)
     {
        toplam = toplam + i;
     }  
     ++i; 
    }
    if(sayi==toplam)
        printf("sayi mukemmel");
    else if(sayi!=toplam)
        printf("sayi mukemmel degil");
*/
/*
char ch;
    printf("Bir karakter giriniz:\n");
        scanf("%c",&ch);
    if((ch >= 'A' && ch <='Z') || (ch>='a' && ch<='z'))
    {
        printf("Bu karakter harftir.\n");
    }
        else if(ch>='0' && ch<='9')
    {
        printf("Bu karakter rakamdir.\n");
    }    
    else{
        printf("Bu ozel bir karakterdir.\n");
    }
*/
/*
int sayi,i;
int enbuyuk,enkucuk;
    printf("birinci sayiyi giriniz:\n");
        scanf("%d",&sayi);
    for(i=2;i<=10;++i)
    {
        printf("%d. sayiyi giriniz:\n",i);
            scanf("%d",&sayi);
        if(sayi>enbuyuk)
        {
            enbuyuk=sayi;
        }
        else if(sayi<enkucuk)
        {
            enkucuk=sayi;
        }
    }        
    printf("en buyuk sayi:%d\nen kucuk sayi:%d\n",enbuyuk,enkucuk);
*/
    return 0;
}
