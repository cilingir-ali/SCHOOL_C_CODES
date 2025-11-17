/*#include <stdio.h>
int main(){
    
    int i,C[]={-5,6,0,72,1543,-89,0,62,-3,1,6453,78};
    for(i=0;i<12;i++)
    printf("C[%d]=%d\n",i,C[i]);
    */
   //10 elemanlı int türden A dizisinin içine 
   //klavyeden girilen değeri atayan c kodunu yazın
   /*#include <stdio.h>
    #define SIZE 10// DEFİNE tanımlak demek yani SIZE ı önceden tanımlıyoruz yukarıda
int main(){
   int A[SIZE],number,i;
printf("enter a number");
scanf("%d",&number);
for(i=0;i<10;i++)
A[i]=number;
for(i=0;i<SIZE;i++)
printf("A[%d]=%d\n",i,A[i]);
*/
/*
   #include <stdio.h>
   int main(){
char Name[]={'s','e','n','g','u','l','\0'};
int i;
for(i=0;i<6;i++)
printf("Name[%d]=%c\n",i,Name[i]);
*/
//100 elemanlı int türden A dizisinin elemanlarına 2 den başlayarak çift sayıları atayan c kodunu yazınız
 #include <stdio.h>
 #define SIZE 100
   int main(){
int A[100],i;
for(i=0;i<100;i++)
    A[i]=(i+1)*2;
for(i=0;i<SIZE;i++)
printf("A[%d]=%d\n",i,A[i]);
return 0;
}