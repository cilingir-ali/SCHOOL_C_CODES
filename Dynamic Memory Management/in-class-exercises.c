/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ogr;
    int ogrSay = 12;
    ogr = calloc(ogrSay,sizeof(*ogr)); //bellekten yer ayirma islemi
    
    printf("%d", ogrSay * sizeof(*ogr));
    
    free(ogr);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4 sayi icin bellekten yer ayirma
    int *ptr1,*ptr2, size;
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at adress %p\n", size , ptr1);

    //16 sayi icin bellekten yer ayir
    size = 16 * sizeof(*ptr2);
    ptr2 = realloc(ptr1, size);
    printf("%d bytes reallocated at adress %p\n",size ,ptr2);

    free(ptr2);

    return 0;
}
*/
