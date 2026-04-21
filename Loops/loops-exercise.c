#include <stdio.h>

int main(){
   
/*  
                      WHİLE KULLANIMI  
    int sayi=1; 
        while(sayi<100){
            printf("%d\n",sayi);
                ++sayi;
    } 
*/
/*    
                      DO WHİLE KULLANIMI
do{
    printf("%d\n",sayi);
        sayi++;
            }while(sayi > 100);
*/
/*          
                      DO WHİLE İLE 100 DEN 1 E SAYI YAZDIRMA    
    int sayi=100;
        do{
            printf("%d\n",sayi);
                --sayi;
                    }while(sayi>0);
*/                  
/*            
                      FOR KULLANIMI 1. ÖRNEK
    int sayi=1;
        for(; sayi < 100; sayi++)
            printf("%d\n", sayi); 
*/
/* 
                      FOR KULLANIMI 2. ÖRNEK
int sayi;
        for(sayi=1; sayi < 100; sayi++)
            printf("%d\n", sayi);
*/
/*           
                      EKRANA 5 DEFA MERHABA YAZDIRAN C KODU            
    int a=1;
        while(a<6){
            printf("merhaba\n");
                ++a;
}    
*/
/*                    1 DEN 10 A KADAR SAYILARIN TOPLAMINI YAZDIRAN C KODU
    int a;
    int sum=0;
        for(a=1;a<=10;++a)
{ 
            sum = sum + a;
}
                printf("sum:%d\n",sum);
*/
/*            DO WHİLE İLE
int a=1,sum=0;
do{
        sum = sum + a;
        ++a;
}while(a<=10);
printf("toplam:%d\n",sum);
*/
/*                      WHİLE İLE  
    int a=1,sum=0;
        while(a<=10){
             sum = sum + a;
             a++;
                printf("toplam:%d\n",sum);
}
*/
return 0;
}
