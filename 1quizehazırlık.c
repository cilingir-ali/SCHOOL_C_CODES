
//WHİLE
#include <stdio.h>
int main(){
/*int sayi;
sayi=1;
while(sayi<=100)
{
    printf("sayi%d\n",sayi);
    sayi++;
}
*/
//DO WHİLE
/*int sayi;
sayi=1;
do{
printf("%d\n",sayi);
sayi++;
}while(sayi<=100);
*/
/*(DO WHİLE İLE 100 DEN 1 E SAYI YAZDIRMA)
int sayi;
sayi=100;
do{
    printf("%d\n",sayi);
    sayi--;
}
while(sayi>0);
*/
/*(FOR İLE 100 DEN 1 E SAYI YAZDIRMA)
int sayi;
for(sayi=100; sayi>1;sayi--)
printf("%d\n",sayi);
*/
/*WHİLE İLE 1 DEN 10 A KADAR SAYILARIN TOPLAMI
int i,sum=0;
i=1;
while(i<=10)
{
    sum=sum+i;
    i++;
}
printf("sum:%d\n",sum);
*/
//1 ile 100 arasımdaki çift sayıları listeleyin
/*
int i;
for(i=1;i<100;i++)
{
    if((i%2)==0)
    printf("%d,",i);
}
*/
//BREAK DEYİMİ
/*int x;
for(x=1;x<100;++x){
    if(x==5){
        break;
    }
printf("%d,",x);
}
printf("\nx in son değeri:%d",x);
*/
//CONTİNUE KULLANIMI 5 İ ATLADI
/*int x;
for(x=1; x<=100;x++)
{
    if(x==5)
    {
        continue;
    }
    printf("%d,",x);
}*/
//CONTİNUE KULLANIMI 5 İ VE 6 YI ATLADI
/*int x;
for(x=1;x<=10;++x){
    if((x==5)||(x==6)){
        continue;
    }
    printf("%d\n",x);
}
*/
/*int sayi; QPVJNFOVĞENQRIPCVMKWDCMIPNMPI
sayi=1;
while(sayi<100)
{
    printf("%d\n",sayi);
    sayi++;
}*/
/*int i,sum=0;
i=1;
while(i<=15)
{
    sum=sum+i;
    i++;
}
printf("sum:%d\n",sum);
*/
/*int i;
for(i=1;i<100;i++)
{
    if((i%2)==0)
    printf("%d,",i);
}*/
/*int x;
for(x=1;x<=100;x++)
{
    if(x==5)
    {
        break;
    }
    printf("%d,",x);
}*/
/*int x;
for(x=1;x<=100;x++){
if((x==5)||(x==6)){
    continue;
}
printf("%d\n,",x);
}*/
//WHİLE DÖNGÜSÜYLE BİR SAYININ BASAMAKLARINI TERS ÇEVİREN PROGRAM YAZ
  /*  int sayi, ters = 0; 

    printf("Bir sayi gir: ");
    scanf("%d", &sayi);

    while (sayi != 0) {
        int basamak = sayi % 10;   // son basamağı al
        ters = ters * 10 + basamak; // ters sayıya ekle
        sayi = sayi / 10;           // bir basamak küçült
    }

    printf("Ters hali: %d\n", ters);
*/
/*int i,sum=0;
for(i=1;i<=10;i++)
{
    sum=sum+i;
}
printf("1 den 10 a kadar olan sayilarin toplami:%d\n",sum);
*/
/*int i;
for(i = 1 ; i  <= 100;i++)
{
if((i%2)==0)
printf("%d,",i);
}
*/
/*int x;
for(x=1;x<1000;x++)
{
    if(x==5)
{
break;
}
printf("%d,",x);
}
*/
/*int x;
for(x=4;x<12;x++)
{
    if(x==6)
    {
        continue;
    }
    printf("%d,",x);
}
*/
/*
int sayi;
sayi=1;
while(sayi<100)
{
    printf("sayi%d\n",sayi);
    sayi++;
}
*/
/*int sayi;
sayi=1;
do{
    printf("sayi%d\n",sayi);
    sayi++;
}
while(sayi<=100);
*/
/*int sayi;
sayi=1;
do{
printf("sayi%d\n",sayi);
sayi++;
}
while(sayi<=100);
*/
/*int sayi;
sayi=1;
do{
    printf("sayi%d\n",sayi);
    sayi++;
}
while(sayi<=100);
*/
    
/*int sayi;
sayi=100;
do{
    printf("sayi%d\n",sayi);
    sayi--;
}
while(sayi>0);
*/
/*int sayi;
for(sayi=100;sayi>1;sayi--)
    printf("sayi%d\n",sayi);
*/
/*int i,sum=0;
i=1;
while(i<=10)
{
    sum=sum+i;
    i++;
}
printf("sum:%d\n",sum);*/
/*int sayi;
sayi=1;
while(sayi<=100)
{
    printf("sayi%d\n",sayi);
    sayi++;
}
*/
/*int sayi;
sayi=1;
do{
    printf("sayi%d\n",sayi);
    sayi++;
}
while(sayi<=100);
*/
/*int i,sum=0;
i=1;
while(i<=10)
{
    sum=sum+i;
    i++;
}
printf("sum:%d\n",sum);
*/
//QUİZ SORUSU!!!!

int sayi;
printf("Bir sayı giriniz: ");
scanf("%d",&sayi);
if(sayi<1||sayi>100){
    printf("Geçersiz giris!");
}
else{
    for(int i=1;i<sayi;i++){
        if(i%3==0 && i%5==0)
        printf("%d ",i);
    }
}
    
//Soru 1
//Klavyeden bir tamsayı giriniz.
//Girilen sayıdan küçük olan 1 ile 100 arasındaki tüm çift sayıları ekrana listeleyen bir C programı yazınız.
/*int sayi;

    printf("Bir tamsayi giriniz: ");
    scanf("%d", &sayi);

    printf("\nGirilen sayidan kucuk olan 1 ile 100 arasindaki cift sayilar:\n");

    for (int i = 2; i < sayi && i <= 100; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
*/
//Soru 2
//Klavyeden girilen sayının pozitif, negatif veya sıfır olduğunu ekrana yazdıran bir C programı yazınız.
/*int sayi;
printf("bir sayi giriniz:");
scanf("%d",&sayi);
if(sayi<0){
    printf("%d\nnegatif",sayi);
}
else if(sayi>0){
    printf("%d\npozitif",sayi);
}
else{
    printf("%d\nsıfır",sayi);
}
*/
//Soru 3
//Klavyeden girilen bir sayının faktöriyelini hesaplayan bir C programı yazınız.
//(Örnek: Girdi=5 → Çıktı=120)
/*int x;
int y=1;
printf("klavyeden bir tam sayı giriniz:");
scanf("%d",&x);
for(x;x>0;x--){
    y=y*x;
}
printf("%d\n",y);
*/
//Soru 4
//1 ile 100 arasındaki tüm sayıları ekrana yazdırınız, ancak 3’e bölünebilen sayılar yerine “Fizz”, 5’e bölünebilen sayılar yerine “Buzz”, her ikisine de bölünebilen sayılar yerine “FizzBuzz” yazdıran bir program yazınız.
/*int sayi;
sayi=2;
while(sayi<100)
{
sayi++;

if(sayi%3==0 && sayi%5!=0){
    printf("Fizz");
}
else if(sayi%5==0 && sayi%3!=0){
    printf("Buzz");
}
else if(sayi%3==0 && sayi%5==0){
    printf("FizzBuzz");
}
else
{
    printf("%d\n",sayi);
}
}
*/

return 0;
}


 