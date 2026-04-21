// Fig. 11.7: fig11_07.c
// Credit inquiry program
#include <stdio.h>

int main(void) 
{
    FILE *cfPtr; // cfPtr = clients.txt file pointer [cite: 28]

    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened"); [cite: 33]
    } 
    else {
        // İstek seçeneklerini görüntüle
        printf("%s", "Enter request\n"
               " 1 - List accounts with zero balances\n"
               " 2 - List accounts with credit balances\n"
               " 3 - List accounts with debit balances\n"
               " 4 - End of run\n? ");
        
        unsigned int request;
        scanf("%u", &request);

        // Kullanıcı 4 girmedikçe işlemleri yap
        while (request != 4) {
            unsigned int account;
            double balance;
            char name[30];

            // Dosyadan ilk kaydı oku
            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

            switch (request) {
                case 1:
                    puts("\nAccounts with zero balances:");
                    while (!feof(cfPtr)) {
                        if (balance == 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
                    break;
                case 2:
                    puts("\nAccounts with credit balances:");
                    while (!feof(cfPtr)) {
                        if (balance < 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
                    break;
                case 3:
                    puts("\nAccounts with debit balances:");
                    while (!feof(cfPtr)) {
                        if (balance > 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
                    }
                    break;
            }

            rewind(cfPtr); // Dosya işaretçisini başa al (Yeni sorgu için)
            printf("%s", "\n? ");
            scanf("%d", &request);
        }

        puts("End of run.");
        fclose(cfPtr); // Dosyayı kapat
    }
}
