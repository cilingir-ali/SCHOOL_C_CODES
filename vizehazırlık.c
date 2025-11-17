#include <stdio.h>
int main() {
/*
//Girilen sayıdan küçük olan 1 ile 100 arasındaki tüm çift sayıları ekrana listeleyen bir C programı yazınız.
int sayi;
printf("bir sayı giriniz (1-100):");
scanf("%d",&sayi);  
if(sayi<1 || sayi>100)
{
	printf("girilen değer 1 ile 100 arasında değil");

}
else
{
	printf("%d den küçük ççift sayılar",sayi);
  for(int i=1; i<sayi; i++)
  {
	if(i%2==0)
	printf("%d\n",i);
  }
}
*/
//1 ile 100 arasındaki tüm sayıları ekrana yazdırınız, ancak 3’e bölünebilen sayılar yerine “Fizz”, 5’e bölünebilen sayılar yerine “Buzz”, her ikisine de bölünebilen sayılar yerine “FizzBuzz” yazdıran bir program yazınız.
/*int i;
for(i=1;i<=100;i++){
	if((i%3==0)&&(i%5==0)){
printf("FizzBuzz\n");
	}
	else if(i%3==0){
		printf("Fizz\n");
	}
	else if(i%5==0){
		printf("Buzz\n");
	}
	else{
		printf("%d\n",i);
	}
}
*/
//Klavyeden iki sayı alınız.
//Bu iki sayı arasındaki tek sayıları ekrana yazdıran bir C programı yazınız.
/*int a,b;
printf("iki sayi giriniz:");
scanf("%d%d",&a,&b);
printf("%d ile %d arasındaki tek sayılar:\n",a,b);
if(a>b)
{
	for(int i=b;i<a;i++){
		if(i%2==1){
			printf("%d\n",i);
		}
	}
}
if(b>a){
	for(int i=a; i<b;i++){
		if(i%2==1){
			printf("%d\n",i);
		}
	}
}
*/
//Klavyeden girilen bir sayının basamak sayısını bulan bir C programı yazınız.
/*int sayi,basamak=0;
printf("bir sayı giriniz:");
scanf("%d",&sayi);
if(sayi==0){
	basamak=1;
}
else { if(sayi<0)
	sayi=-sayi;
	for (; sayi > 0; sayi = sayi / 10) {
            basamak++;
	}
}
printf("girilen sayı %d basamaklıdır",basamak);
*/
/*
char ch;
printf("bir karakter giriniz:");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')){
	printf("girilen değer bir HARF dir\n");
}
else if(ch>='0'&& ch<='9'){
	printf("girilen değer bir RAKAM dır\n");
}
else{
	printf("girilen değer ÖZEL bir değerdir\n");
}
*/
//1 ile 50 arasındaki sayıları yazdırınız.
//Ancak 7’nin katı olan sayılarda döngüyü durdurunuz.
/*int i;
for(i=1;i<50;i++){
{
	if(i%7==0)
	continue;
}
printf("%d\n",i);
}
*/
//Klavyeden bir karakter giriniz.
//Girilen karakterin harf mi, rakam mı yoksa özel karakter mi olduğunu belirleyen bir C programı yazınız.
/*char ch;
printf("bir karakter giriniz:");
scanf("%c",&ch);
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')){
	printf("girilen değer bir HARF tir.\n");
}
else if(ch>='0'&& ch<='9'){
	printf("girilen değer bir RAKAM dır.\n");
}
else{
	printf("girilen değer ÖZEL bir karakterdir.");
}
*/
/*Soru 17-Aşağıdaki menüyü ekrana yazdırınız:
1 – Dairenin Alanını Hesapla
2 – Üçgenin Alanını Hesapla
3 – Karenin Alanını Hesapla
4 – Çıkış
Kullanıcı bir seçim yapar ve ilgili şeklin kenar veya yarıçap bilgisi girilerek alan hesabı yapılır.
*/
/*int secim;
float pi=3.14;
float yaricap,taban,yükseklik,kenar,alan;
printf("geometrik şekillerin alanlarını bulalım\n");
printf("seçiminizi yapınız (1-4)\n");
printf("1-(dairenin alanını hesaplama:)\n");
printf("2-(üçgenin alanını hesaplama:)\n");
printf("3-(karenin alanını hesaplama:)\n");
printf("4-çıkış ");
scanf("%d",&secim);
switch (secim){
	case 1:
	printf("darienin yarıcapını giriniz:");
	scanf("%f",&yaricap);
	alan=pi*yaricap*yaricap;
	printf("dairenin alanı:%.2f\n",alan);
	break;
	case 2:
	printf("üçgenin tabanını ve yüksekliğini giriniz:");
	scanf("%f%f",&taban,&yükseklik);
	alan=(taban*yükseklik)/2;
	printf("üçgenin alanı %.2f\n",alan);
	break;
	case 3:
	printf("karenin bir kenarını giriniz:\n");
	scanf("%f",&kenar);
	alan=kenar*kenar;
	printf("karenin alanı:%.2f",alan);
	break;
	case 4:
	printf("programan çıkılıyor....");
	break;
	default:
	printf("geçersiz giriş");
}
*/
/*
int secim;
float pi=3.14;
float taban,yukseklik,yaricap,kenar,alan;
printf("geometrik şekillerin alanlarını bulma programına hoşgeldiniz\n");
printf("seçiminizi yapınız (1-4)\n");
printf("1-(karenin alanınını bulma:)\n");
printf("2-(üçgenin alanını bulma)\n");
printf("3-(dairenin alanını bulma)\n");
printf("4-çıkış\n");
printf("Seçiminizi girermisiniz(1-4) ");
scanf("%d",&secim);
switch(secim){
	case 1:
	printf("karenin bir kenarını giriniz");
	scanf("%f",&kenar);
	alan=kenar*kenar;
	printf("karenin alanı: %.2f\n",alan);
	break;
	case 2:
	printf("üçgenini tabanını ve yükesekliğini giriniz:");
	scanf("%f%f",&taban,&yukseklik);
	alan=(taban*yukseklik)/2;
	printf("üçgenin alanı:%.2f\n",alan);
	break;
	case 3:
	printf("dairenin yarıcapını giriniz:");
		scanf("%f",&yaricap);
		alan=pi*yaricap*yaricap;
		printf("dairenin alanı:%.3f\n",alan);
		break;
		case 4:
		printf("programdan cıkılıyor..\n");
		break;
		default:
		printf("Geçersiz giriş!\n");
}
*/
//Soru 16 - Klavyeden yıl ve ay numarası (1–12) giriniz. Girilen ayın kaç gün çektiğini ekrana yazdıran bir C programı yazınız.
//Şubat ayı için 28 gün, artık yıllarda 29 gün yazdırılmalıdır.
/*int ay,yil,gün;
printf("hangi yıl:\n");
scanf("%d",&yil);
printf("hangi ay (1-12):\n");
scanf("%d",&ay);
switch (ay){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	gün=31;
	break;
	case 4: case 6: case 9: case 11:
	gün=30;
	break;
	case 2:
	if(yil%4==0)
	gün=29;
	else
	gün=28;
	break;
	default:
	printf("Geçersiz ay numarası!!!");
	break;
}
printf("%d yılının %d. ayı %d gün çeker",yil,ay,gün);
*/
/*int sayi;
sayi=1;
while(sayi<=100)
{
	printf("sayi%d\n",sayi);
	sayi++;
}
*/
/*
int sayi;
for(sayi=200;sayi>=0;sayi--)
printf("%d\n",sayi);
*/
/*
int sayi;
sayi=1;
do{
	printf("%d\n",sayi);
	sayi++;
}while(sayi<=100);
*/
/*
int sayi;
sayi=100;
do{
	printf("%d\n",sayi);
	sayi--;
}while(sayi>=1);
*/
/*
int i,toplam=0;
i=1;
while(i<=10){
	toplam=toplam+i;
	i++;
}
printf("toplam:%d\n",toplam);
*/
/*
int i;
for(i=1;i<=100;i++){
	if(i%2==0)
	printf("%d,",i);
}
*/
/*
int i;
for(i=1;i<=100;i++){
	if(i==5)
	{
		break;
	}
	printf("%d\n",i);
}
printf("i nin son değeri:%d",i);
*/
/*
int x;
for(x=1;x<=100;x++){
	if(x==5){
		continue;
	}
	printf("%d,",x);

}
*/
/*
int x;
for(x=1;x<=100;x++){
	if((x==5)||(x==6)){
		continue;
	}
	printf("%d,",x);
}
*/
/*
int i;
for(i=1;i<=5;i++){
	printf("merhaba\n");
}
*/
//5- Klavyeden girilen 5 sayının toplamını ekrana yazdırınız.
/*
 int i, sayi;
    int toplam = 0;

    for(i = 1; i <= 5; i++) {
        printf("%d. sayiyi giriniz: ", i);
        scanf("%d", &sayi);   // klavyeden sayı al
        toplam = toplam + sayi; // toplama ekle
    }

    printf("Girilen sayilarin toplami = %d\n", toplam);
*/
//1 ile 100 arasındaki tüm sayıları ekrana yazdırınız, ancak 3’e bölünebilen sayılar yerine
//“Fizz”, 5’e bölünebilen sayılar yerine “Buzz”, her ikisine de bölünebilen sayılar yerine
//“FizzBuzz” yazdıran bir program yazınız.
/*int i;
for(i=1;i<=100;i++){
	if(i%15==0){
		printf("FizzBuzz\n");
	}
	else if(i%3==0){
		printf("Fizz\n");
	}
	else if(i%5==0){
		printf("Buzz\n");
	}
	else{
		printf("%d\n",i);
	}
}
*/
//ASALMI DEĞİLMİ 
/*
int sayi, i;
    int isAsal = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 1) {
        isAsal = 0;
    } else {
        for (i = 2; i < sayi; i++) {
            if (sayi % i == 0) {
                isAsal = 0;
                break;
            }
        }
    }

    if (isAsal == 1) {
        printf("%d bir asal sayidir.\n", sayi);
    } else {
        printf("%d bir asal sayi degildir.\n", sayi);
    }
*/
int sayi;
printf("Bir sayi giriniz:");
scanf("%d",&sayi);
if((sayi>0)&&(sayi%2==0)){
	printf("Pozitif Çift");
}
else if((sayi>0)&&(sayi%2!=0)){
	printf("Pozitif Tek");
}
else if((sayi<0)&&(sayi%2==0)){
	printf("Negatif Çift");
}
else if((sayi<0)&&(sayi%2!=0)){
	printf("Negatif Tek");
}
	else{
	printf("Sıfır");
}






    return 0;
}
