#include <stdio.h>

int urunSayisiEsikAltinda(int fiyatlar[], int n, int esikDeger) {
    int sayac = 0;
    printf("\nEşik Değer (%d TL) Altındaki Ürün Fiyatları:\n", esikDeger);
    for (int i = 0; i < n; i++) {
        if (fiyatlar[i] < esikDeger) {
            printf("Ürün %d: %d TL\n", i + 1, fiyatlar[i]);
            sayac++;
        }
    }
    return sayac;
}

float fiyatOrtalamasi(int fiyatlar[], int n) {
    float toplam = 0;
    for (int i = 0; i < n; i++) {
        toplam += fiyatlar[i];
    }
    float ort = toplam / n;
    return ort;
}

void ciftFiyatlariGoster(int fiyatlar[], int n) {
    printf("\nÇift Fiyatlı Ürünler:\n");
    for (int i = 0; i < n; i++) {
        if (fiyatlar[i] % 2 == 0) {
            printf("Ürün %d: %d TL\n", i + 1, fiyatlar[i]);
        }
    }
}

int main() {
    int n;
    printf("Kaç adet ürün fiyatı gireceksiniz? ");
    scanf("%d", &n);

    int fiyatlar[n];
    for (int i = 0; i < n; i++) {
        printf("Ürün %d fiyatını giriniz (TL): ", i + 1);
        scanf("%d", &fiyatlar[i]);
    }

    int esikDeger = 70;
    int altindaKalanUrunSayisi = urunSayisiEsikAltinda(fiyatlar, n, esikDeger);
    printf("Eşik değerin altındaki ürün sayısı: %d\n", altindaKalanUrunSayisi);

    float ortalama = fiyatOrtalamasi(fiyatlar, n);
    printf("\nÜrünlerin Ortalama Fiyatı: %.2f TL\n", ortalama);

    ciftFiyatlariGoster(fiyatlar, n);

    return 0;
}
