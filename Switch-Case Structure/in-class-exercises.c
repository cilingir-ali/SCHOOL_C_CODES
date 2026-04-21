#include <stdio.h>

int main()
{
/*
        Klavyeden yıl ve ay numarası (1–12) giriniz. Girilen ayın kaç gün çektiğini ekrana yazdıran bir C programı yazınız.
        Şubat ayı için 28 gün, artık yıllarda 29 gün yazdırılmalıdır.
*/
/*    int yil,ay,sayac;
        printf("bir yil giriniz:\n");
            scanf("%d",&yil);
                printf("bir ay giriniz (sayi ile):\n");
                    scanf("%d",&ay);
    
    switch(ay)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        sayac=31;
        printf("%d yılının %d. ayi %d cekiyor\n",yil,ay,sayac);
        break;

        case 2:
        if(yil%4==0)
        {
            sayac=29;
        }
        else
        {
            sayac=28;
        }
        printf("%d yılının %d. ayi %d cekiyor\n",yil,ay,sayac);
        break;

        case 4: case 6: case 9: case 11:
        sayac=30;
        printf("%d yılının %d. ayi %d cekiyor:",yil,ay,sayac);
        break;
    }
if(ay>12 || ay<0)
    printf("gecersiz giris!");
*/

/*
    Aşağıdaki menüyü ekrana yazdırınız:
    1 – Dairenin Alanını Hesapla
    2 – Üçgenin Alanını Hesapla
    3 – Karenin Alanını Hesapla
    4 – Çıkış
    Kullanıcı bir seçim yapar ve ilgili şeklin kenar veya yarıçap bilgisi girilerek alan hesabı yapılır.
*/
/*
    float pi=3.14;
    int kare_kenari,dairenin_yc,ücgenin_yuksekligi,ucgenin_taban,secim; 
    printf("1 – Dairenin Alanını Hesapla\n2 – Üçgenin Alanını Hesapla\n3 – Karenin Alanını Hesapla\n4 – Çıkış\n");
        printf("Menüden bir seçim yapınız:\n");
            scanf("%d",&secim);
    switch(secim)
    {
        case 1:
        printf("dairenin yarıçapını giriniz:\n");
            scanf("%d",&dairenin_yc);
        float daire_alan= (float)(pi * (dairenin_yc * dairenin_yc));
        printf("dairenin alannı:%f\n",daire_alan);
        break;

        case 2:
        printf("üçgenin sırasıyla tabanını ve yüksekliğini giriniz:\n");
            scanf("%d %d",&ucgenin_taban,&ücgenin_yuksekligi);
        float ucgen_alan = (float) ((ucgenin_taban * ücgenin_yuksekligi) / 2);
        printf("ucgenin alanı:%f\n",ucgen_alan);
        break;

        case 3:
        printf("karenin bir kenar uzunluğunu giriniz:\n");
            scanf("%d",&kare_kenari);
        float karenin_alani = (float) (kare_kenari * kare_kenari);
        printf("karenin alanı:%f\n",karenin_alani);
        break;
        
        case 4:
        printf("Başarıyla çıkış yaptınız\n");
    }
*/
/*
    Kullanıcıdan bir tam sayı alınız.
    Bu sayının palindrom sayı olup olmadığını kontrol eden bir C programı yazınız.
   (Örnek: Girdi: 12321 → Palindrom, Girdi: 12345 → Değil)
*/
/*
int sayi,gecici,kalan,ters=0;
    printf("Bir tam sayi giriniz:\n");
        scanf("%d",&sayi);
        gecici=sayi;
    while(gecici!=0)
    {
        kalan=gecici%10;
        ters= ters*10+ kalan;
        gecici/=10;
    }
    if(sayi==ters)
        printf("%d palindrom bir sayidir\n",sayi);
    else
        printf("%d palindrom bir sayi değildir\n",sayi);
*/
/*
Kullanıcıdan n tane tam sayı girilmesini isteyiniz. Girilen sayılardan sık tekrar eden elemanı ve tekrar sayısını bulan bir C programı yazınız
*/

return 0;
}
