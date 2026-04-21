#include <stdio.h>

#define UCAK_SAYISI 5

int ucusNo[UCAK_SAYISI] = {159, 260, 301, 492, 500};


int varisYeri[UCAK_SAYISI] = {1, 2, 3, 1, 4};//(1=Tekirdağ, 2=Tokat, 3=Antarktika, 4=Mısır)


int durum[UCAK_SAYISI] = {0, 0, 1, 0, 2}; //(0=Rötarsız, 1=Rötarli, 2=İptal)

void menuyuGoster();
void ucuslariListele();
void durumGuncelle();
void ucusAra();

int main() {
    int secim = 0;

    printf("--- HAVAALANI UCUS TAKIP SISTEMI ---\n");

    while(1) {
        menuyuGoster();
        scanf("%d", &secim);

        switch(secim) 
        {
            case 1:
                ucuslariListele();
                break;
            case 2:
                durumGuncelle();
                break;
            case 3:
                ucusAra();
                break;
            case 4:
                printf("Sistemden cikiliyor...\n");
                return 0; 
            default:
                printf("Hatali secim! Lutfen tekrar deneyin.\n");
        }
    }
    return 0;
}

void menuyuGoster() 
{
    printf("\n--- MENU ---\n");
    printf("1. Tum Ucuslari Listele\n");
    printf("2. Ucus Durumu Guncelle (Rotar/Iptal)\n");
    printf("3. Ucus Ara\n");
    printf("4. Cikis\n");
    printf("Seciminiz: ");
}

void ucuslariListele() 
{
    printf("\n%s %s %s\n", "Ucus No", "Varis Yeri", "Durum");
    printf("------------------------------------------\n");

    for(int i = 0; i < UCAK_SAYISI; i++) 
    {
        printf("%d ", ucusNo[i]);

        switch(varisYeri[i]) {
            case 1: printf("%s ", "Tekirdağ"); 
            break;

            case 2: printf("%s ", "Tokat"); 
            break;

            case 3: printf("%s ", "Antarktika"); 
            break;

            case 4: printf("%s ", "Misir"); 
            break;

            default: printf("%s ", "Bilinmiyor");
        }

        switch(durum[i]) {
            case 0: printf("ROTARSIZ\n"); 
            break;

            case 1: printf("ROTARLI\n"); 
            break;

            case 2: printf("IPTAL\n"); 
            break;

            default: printf("Belirsiz\n");
        }
    }
}

void durumGuncelle() {
    int arananNo, bulunduMu = 0;
    int yeniDurum;

    printf("\nDurumunu guncellemek istediginiz Ucus No: ");
    scanf("%d", &arananNo);

    for(int i = 0; i < UCAK_SAYISI; i++) {
        if(ucusNo[i] == arananNo) {
            bulunduMu = 1; 
            printf("%d nolu ucus bulundu. Yeni durum (0:Rotarsiz, 1:Rotarli, 2:Iptal): ", arananNo);
            scanf("%d", &yeniDurum);
            
            durum[i] = yeniDurum;
            printf("Guncelleme basarili!\n");
            break; 
        }
    }

    if(bulunduMu == 0) {
        printf("Hata: %d numarali ucus bulunamadi.\n", arananNo);
    }
}

void ucusAra() {
    int arananNo, bulunduMu = 0;

    printf("\nDetayini gormek istediginiz Ucus No: ");
    scanf("%d", &arananNo);

    for(int i = 0; i < UCAK_SAYISI; i++) {
        if(ucusNo[i] == arananNo) 
        {
            bulunduMu = 1;
            printf("\n--- Ucus Detayi ---\n");
            printf("Ucus No: %d\n", ucusNo[i]);
            
            printf("Varis: ");
            switch(varisYeri[i]) 
            {
                case 1: printf("Tekirdağ"); 
                break;
                
                case 2: printf("Tokat"); 
                break;
                
                case 3: printf("Antarktika"); 
                break;
                
                case 4: printf("Misir"); 
                break;
            }
            
             printf("\nDurum: ");

             if(durum[i] == 0)
             { 
              printf("ROTARSIZ");
             }
             else if(durum[i] == 1)
             { 
             printf("ROTARLI");
             }
             else
             { 
                printf("IPTAL");
             }
             printf("\n");
             break;
        }
    }

    if(bulunduMu == 0) 
    {
        printf("Ucus bulunamadi.\n");
    }
}
