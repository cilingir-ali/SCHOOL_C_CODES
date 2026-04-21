#include <stdio.h>

int main()
{
    char tampon[100];
    FILE *dosya;
    dosya = fopen("notlar.txt","w");
    if(dosya == NULL)
    {
        printf("Dosya olusturulamadi\n");
        return 1;
    }
    fprintf(dosya,"Selamlar nasilsiniz?");
    fclose(dosya);
    
    dosya = fopen("notlar.txt","r");
    if(dosya==NULL)
    {
        printf("Dosya bulunamadi");
        return 1;
    }
    while(fgets(tampon,100,dosya) != NULL)
    {
        printf("%s ",tampon);
    }
    fclose(dosya);
    return 0;
}
