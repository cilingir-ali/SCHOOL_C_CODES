#include <stdio.h>

int main() {
//                1 İLE 100 ARASINDAKİ ÇİFT SAYILARIN LİSTELEYİN
/*    int a;

        for(a=1; a<100;a++)
        {
            if((a % 2) == 0) 
                printf("%d, ",a); 
        }
*/
/*               BREAK KULLANIMI  
    int x;

        for(x=1;x<=10;++x) {
            if(x==5){
                break;
            }
        printf("%d\n",x);
    }        
    printf("\nx in son degeri:%d",x);
*/
/*               CONTİNUE KULLANIMI 5 İ VE 6 YI ATLAR DEVAM EDER BREAK AKSİNE    
    int x;

        for(x=1;x<=10;++x) {
            if((x==5) || (x==6)){
                continue;
            }
        printf("%d\n",x);
    }        
*/
//               1 İLE 100 ARASINDAKİ SAYİLARİN TOPLAMİNİ, ORTALAMASINI HESAPLAYAN C KODUNU YAZINIZ
/*    int a, sum =0;
    double ortalama;
        for(a=1;a<=100;++a){
            sum = sum + a;
        }
    ortalama = (double)sum / 100;    
    printf("Toplam:%d\n",sum);
        printf("Ortalama:%.2lf", ortalama);
*/
/*    
    int a, carpim = 1;
        for(a=1;a<10;++a){
            carpim *= a;
        }  
    printf("Carpim:%d\n",carpim);
*/    
//                1 İLE 100 ARASINDAKİ TEK SAYİLARİ EKRANA YAZDIRIN
/*
    int a;
        for(a=1;a<=100;a+=2){
            printf("%d\n",a);
        }
*/
/*                1 İLE 100 ARASINDAKİ TEK SAYİLARİ VE ADEDİNİ EKRANA YAZDIRIN
    int a,sayac;
        for(a=1;a<=100;a+=2) 
        {
            printf("%d\n",a);
        }
    sayac= (a-1)/(2);
        printf("tek sayi adedi:%d",sayac);
*/
//                    ALTERNATİF YOL  
/*    
    int a,sayac=0;
        for(a=1;a<=100;a+=2) 
        {
            printf("%d\n",a);
            sayac++;
        }
        printf("tek sayi adedi:%d",sayac);
*/

return 0;
}
