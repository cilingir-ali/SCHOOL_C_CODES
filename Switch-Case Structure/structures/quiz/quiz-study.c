#include <stdio.h>

int main(){
    /* int a,b=1;
       
    printf("bir sayi giriniz:\n");
        scanf("%d",&a);
do{       printf("%d\n",b);
                b++;     
  }while(b<=a);
   */
   /* int a,b;
        printf("bir sayi giriniz:\n");
            scanf("%d",&a);
    for(b=2;b<=a;b+=2){
        printf("%d\n",b);
    }
    */
  /*  int a,b,c=1;
        printf("bir sayi giriniz:\n");
            scanf("%d",&a);
        for(b=1;b<=a;b++){
        c= c*b;    
        }
printf("sayinin fak:%d\n",c);
*/
/*                               SAYININ BASAMAKLARINI YAZDIRMA
int sayi, basamak, sira = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi > 0) {
        basamak = sayi % 10;           // son basamak
        printf("Basamak %d: %d\n", sira, basamak);
        sayi = sayi / 10;              // bir basamak eksilt
        sira++;
        }

*/
/*                               SAYININ TERSİNİ BULMA
int sayi, ters = 0, kalan;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi != 0) {
        kalan = sayi % 10;           // son basamak
        ters = ters * 10 + kalan;    // ters sayiyi oluştur
        sayi = sayi / 10;            // bir basamak eksilt
    }

    printf("Sayinin tersi: %d\n", ters);
*/
/*                    ŞİFRE KONTROLÜ DO WHİLE İLE
int a,b,c;
do{  printf("4 haneli bir sifre giriniz:\n");
        scanf("%d",&a);
            if(a!=1234){
            printf("yanlis bir sifre girdiniz\n");}
    }while(a!=1234);
    printf("sifreniz dogru");
*/    
/*                           BİR SAYIDAN BİR SAYIYA KARE YAZDIRMA
    int a=1,sayi,kare;
        printf("bir sayi giriniz:\n");
            scanf("%d",&sayi);
        do{
            kare=a*a;
            printf("%d sayisinin karesi:%d\n",a,kare);
            a++;
        }while(a<=sayi);
*/        
    int a,b;
        printf("bir sayi giriniz:");
            scanf("%d",&a);
        while(a>0){
        
        }
return 0;
}
