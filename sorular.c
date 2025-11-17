#include <stdio.h>
int main(){
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
 /*int i;

    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
    }
*/
//Soru 5
//Klavyeden iki sayı alınız.
//Bu iki sayı arasındaki tek sayıları ekrana yazdıran bir C programı yazınız.
  /*  int sayi1, sayi2;
    int i;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("%d ile %d arasindaki tek sayilar:\n", sayi1, sayi2);

    // Küçükten büyüğe doğru gitmek için kontrol
    if (sayi1 > sayi2) {
        int temp = sayi1;
        sayi1 = sayi2;
        sayi2 = temp;
    }

    for (i = sayi1 + 1; i < sayi2; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
*/
//Soru 6
//Klavyeden girilen bir sayının asal sayı olup olmadığını bulan bir C programı yazınız.
//(İpucu: 2’den başlayarak sayının kendisine kadar bölünebilirliğini kontrol ediniz.)
  /*  int n, i, asal = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (n <= 1) asal = 0;
    for (i = 2; i < n; i++)
        if (n % i == 0) { asal = 0; break; }

    printf("%d %s\n", n, asal ? "asaldir." : "asal degildir.");
*/
//Soru 7
//1 ile 50 arasındaki sayıları yazdırınız.
//Ancak 7’nin katı olan sayılarda döngüyü durdurunuz.
//(break ifadesini kullanabilirsiniz.)
/*int sayi;
for(sayi=1;sayi<50;sayi++){
    if(sayi%7==0)
continue;
    printf("%d\n",sayi);
}
*/
//Soru 8
//Klavyeden 10 adet sayı giriniz.
//Bu sayılardan en büyük ve en küçük olanı bulan bir C programı yazınız.
/*int a,b,c,d,e,f,g,h,i,j,max,min;
printf("on adet sayi giriniz:");
scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
max=min=a;
if(a>max)max=a;
if(b>max)max=b;
if(c>max)max=c;
if(d>max)max=d;
if(e>max)max=e;
if(f>max)max=f;
if(g>max)max=g;
if(h>max)max=h;
if(i>max)max=i;
if(j>max)max=j;
if(a<min)min=a;
if(b<min)min=b;
if(c<min)min=c;
if(d<min)min=d;
if(e<min)min=e;
if(f<min)min=f;
if(g<min)min=g;
if(h<min)min=h;
if(i<min)min=i;
if(j<min)min=j;
printf("en büyük sayi:%d\n",max);
printf("en küçük sayi:%d",min);
*/
//CHAT GPT
/*
int sayilar[10], i, enBuyuk, enKucuk;

    printf("10 adet sayi giriniz:\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &sayilar[i]);

    enBuyuk = enKucuk = sayilar[0];

    for (i = 1; i < 10; i++) {
        if (sayilar[i] > enBuyuk) enBuyuk = sayilar[i];
        if (sayilar[i] < enKucuk) enKucuk = sayilar[i];
    }

    printf("En buyuk sayi: %d\nEn kucuk sayi: %d\n", enBuyuk, enKucuk);
*/
//Soru 9
//Klavyeden bir karakter giriniz.
//Girilen karakterin harf mi, rakam mı yoksa özel karakter mi olduğunu belirleyen bir C programı yazınız.
//(İpucu: ASCII aralıklarını kullanabilirsiniz.)
/*??????????????
?
????
?
?
*/
//Soru 10
//Klavyeden girilen bir sayının basamak sayısını bulan bir C programı yazınız.
//(Örnek: Girdi=2456 → Çıktı=4 basamaklı sayı)
/*int sayi,basamak=0;
printf("bir sayi giriniz:");
scanf("%d",&sayi);
if(sayi==0){
    basamak=1;
}
else{
    if(sayi<0) sayi=-sayi;
      for (; sayi != 0; basamak++) {
            sayi /= 10; 
        }
    }
printf("girdiginiz sayi:%d basamaklıdır.😀\n",basamak);
*/
//Soru 11– Mükemmel Sayı Kontrolü
//Klavyeden bir tamsayı giriniz.
//Sayının mükemmel sayı olup olmadığını bulan bir program yazınız.
//(Bir sayının kendisi hariç pozitif bölenlerinin toplamı kendisine eşitse mükemmel sayıdır. Örn: 6, 28)
  int sayi, i, toplam = 0;

    printf("Bir tamsayi giriniz: ");
    scanf("%d", &sayi);

    // Sayinin kendisi hariç bölenlerinin toplamını bul
    for (i = 1; i < sayi; i++) {
        if (sayi % i == 0) {
            toplam = toplam + i;
        }
    }

    // Mükemmel sayı kontrolü
    if (toplam == sayi) {
        printf("%d bir mukemmel sayidir.\n", sayi);
    } else {
        printf("%d bir mukemmel sayi degildir.\n", sayi);
    }

//Soru 12 – Sayının Tersini Bulma
//Klavyeden girilen bir sayının tersini hesaplayan bir C programı yazınız.
//(Örnek: 1234 → 4321)
//???????????
//???????
//????????
//???
/*Soru 13 – Armstrong Sayısı
Girilen bir sayının Armstrong sayısı olup olmadığını bulan bir C programı yazınız.
(Örn: 153 = 1³ + 5³ + 3³)

Soru 14 – Fibonacci Serisi
Klavyeden girilen n değeri kadar Fibonacci serisi oluşturan bir C programı yazınız.
(Örnek: n=7 → 0, 1, 1, 2, 3, 5, 8)
*/

//Soru 15 – En Büyük Ortak Bölen (EBOB) ve En Küçük Ortak Kat (EKOK)
//Klavyeden iki pozitif sayı giriniz.
//Bu sayıların EBOB ve EKOK değerlerini bulan bir program yazınız.
//Soru 16 - Klavyeden yıl ve ay numarası (1–12) giriniz. Girilen ayın kaç gün çektiğini ekrana yazdıran bir C programı yazınız.
//Şubat ayı için 28 gün, artık yıllarda 29 gün yazdırılmalıdır.
 /*   int yil, ay, gun;

    printf("Yili giriniz: ");
    scanf("%d", &yil);

    printf("Ay numarasini giriniz (1-12): ");
    scanf("%d", &ay);

    switch(ay) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            gun = 31;
            break;
        case 4: case 6: case 9: case 11:
            gun = 30;
            break;
        case 2:
            if (yil % 4 == 0)
                gun = 29;
            else
                gun = 28;
            break;
        default:
            printf("Gecersiz ay numarasi!\n");
            return 0;
    }

    printf("%d yilinin %d. ayi %d gun ceker.\n", yil, ay, gun);
    */

/*Soru 17-Aşağıdaki menüyü ekrana yazdırınız:
1 – Dairenin Alanını Hesapla
2 – Üçgenin Alanını Hesapla
3 – Karenin Alanını Hesapla
4 – Çıkış
Kullanıcı bir seçim yapar ve ilgili şeklin kenar veya yarıçap bilgisi girilerek alan hesabı yapılır.
*/
   /* int secim;
    float pi=3.14;
    float yaricap, taban, yukseklik, kenar, alan;

    printf("===== ALAN HESAPLAMA MENUSU =====\n");
    printf("1 - Dairenin Alanini Hesapla\n");
    printf("2 - Ucgenin Alanini Hesapla\n");
    printf("3 - Karenin Alanini Hesapla\n");
    printf("4 - Cikis\n");
    printf("Seciminizi giriniz (1-4): ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("Dairenin yaricapini giriniz: ");
            scanf("%f", &yaricap);
            alan = pi * yaricap * yaricap;
            printf("Dairenin alani: %.2f\n", alan);
            break;

        case 2:
            printf("Ucgenin taban uzunlugunu giriniz: ");
            scanf("%f", &taban);
            printf("Ucgenin yuksekligini giriniz: ");
            scanf("%f", &yukseklik);
            alan = (taban * yukseklik) / 2;
            printf("Ucgenin alani: %.2f\n", alan);
            break;

        case 3:
            printf("Karenin bir kenarini giriniz: ");
            scanf("%f", &kenar);
            alan = kenar * kenar;
            printf("Karenin alani: %.2f\n", alan);
            break;

        case 4:
            printf("Programdan cikiliyor...\n");
            return 0;

        default:
            printf("Gecersiz secim yaptiniz!\n");
    }
*/
//Soru 18- Kullanıcıdan bir tam sayı alınız.
//Bu sayının palindrom sayı olup olmadığını kontrol eden bir C programı yazınız.
//(Örnek: Girdi: 12321 → Palindrom, Girdi: 12345 → Değil)
 /*int sayi, orijinal, ters = 0, kalan;

    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    orijinal = sayi; // Sayının orijinal halini sakla

    while (sayi != 0) {
        kalan = sayi % 10;         // Sayının son basamağını al
        ters = ters * 10 + kalan;  // Ters sayıya bu basamağı ekle
        sayi = sayi / 10;          // Sayıyı 1 basamak küçült
    }

    if (orijinal == ters)
        printf("%d bir palindrom sayidir.\n", orijinal);
    else
        printf("%d bir palindrom sayi degildir.\n", orijinal);
*/





/*Soru 19- Kullanıcıdan n tane tam sayı girilmesini isteyiniz. Girilen sayılardan sık tekrar eden elemanı ve tekrar sayısını bulan bir C programı yazınız*/








return 0;
}