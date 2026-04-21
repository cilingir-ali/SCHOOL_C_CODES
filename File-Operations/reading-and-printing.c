// Fig. 11.6: fig11_06.c
// Reading and printing a sequential file
#include <stdio.h>

int main(void) 
{
    FILE *cfPtr; // cfPtr = clients.txt file pointer [cite: 7]

    // fopen dosyayı okuma modunda açar [cite: 32, 43]
    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
        puts("File could not be opened"); [cite: 33]
    } 
    else { // Dosyadan hesap, isim ve bakiye bilgilerini oku
        unsigned int account; 
        char name[30]; 
        double balance; 

        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance); [cite: 70]

        // Dosya sonuna gelene kadar oku [cite: 72]
        while (!feof(cfPtr)) {
            printf("%-10d%-13s%7.2f\n", account, name, balance);
            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
        }

        fclose(cfPtr); // Dosyayı kapat [cite: 55]
    }
}
