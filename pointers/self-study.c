/*
#include <stdio.h>

void degerdegistir(int *x,int *y)
{
    int gecici=*x;
    *x = *y;
    *y = gecici;

}

int main()
{
    int a=5,b=10;
    printf("degismeden once:a=%d b=%d\n",a,b);
    degerdegistir(&a,&b);
    printf("degisimden sonra:a=%d b=%d",a,b);

    return 0;
}
*/
/*
#include <stdio.h>

void yazdir(int *ptr,int uzunluk)
{
    printf("Dizi elemanlari: ");

    for(int i=0;i < uzunluk;i++)
    {
        printf("%d",*ptr);
        ptr++;
    }
    printf("\n");
}

int main()
{
    int dizi[5]={10,20,30,40,50};
    
    yazdir(dizi,5);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a=10;
    int *p = &a;
    printf("%p\n",p);
    *p = 20;
    printf("%d",a);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int dizi[5]={10,20,30,40,50};
    int *p = dizi;

    for(int i=0;i<5;i++)
    {
        printf("%d,",*(p+i));
    }

    return 0;
}
*/
/*
#include <stdio.h>

void kareAl(int *x)
{
    *x = (*x) * (*x);
}

int main()
{
    int x=5;
    kareAl(&x);
    printf("%d",x);

    return 0;
}
*/
/*
#include <stdio.h>

int uzunlukBUl(char *x)
{
    int sayac=0;
    while(*x != '\0')
    {
        sayac++;
        x++;
    }
    return sayac;
}

int main()
{
    char dizi[]="Merhaba";
    printf("Dizinin uzunlugu:%d\n",uzunlukBUl(dizi));

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int a=10;
    int *p = &a;
    int **q = &p;

    *p = 100;
    **q=200;

    printf("%d",a);
    return 0;
}
