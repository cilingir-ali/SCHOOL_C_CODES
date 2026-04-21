// Fig. 11.2: fig11_02.c
// Creating a sequential file
#include <stdio.h>

int main(void) 
{
    FILE *cfPtr; // cfPtr = clients.txt file pointer [cite: 7]

    // fopen dosyayı açar. Dosya oluşturulamazsa programdan çıkar [cite: 30, 32]
    if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
        puts("File could not be opened"); [cite: 33]
    } 
    else {
        puts("Enter the account, name, and balance.");
        puts("Enter EOF to end input."); // Windows için Ctrl+Z [cite: 71, 72]
        printf("%s", "? ");

        unsigned int account; // account number
        char name[30]; // account name
        double balance; // account balance

        scanf("%u%29s%lf", &account, name, &balance);

        // Standart girişten dosya sonu (EOF) gelene kadar yazmaya devam et [cite: 71]
        while (!feof(stdin)) {
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance); [cite: 74]
            printf("%s", "? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // Dosyayı kapat [cite: 31, 56]
    }
}
