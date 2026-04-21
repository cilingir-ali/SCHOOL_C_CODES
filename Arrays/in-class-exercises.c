/*#include <stdio.h>

int main()
{
    int i,C[] = {-45,6,0,72,1543,-89,0,62,-3,1,6453,78};
        for(i = 0 ; i < 12; i++)
        {
            printf("C[%d] = %d\n",i ,C[i]);
        }
        return 0;
}
*/
/*
#include <stdio.h>
#define SIZE 10

int main()
{
    int A[SIZE], number, i;

    printf("Enter a number:\n");
    scanf("%d",&number);

    for(i = 0;i < SIZE; i++)
    {
        A[i] = number;
    }
    for(i = 0 ; i < SIZE; i++)
    {
        printf("A[%d] = %d\n",i ,A[i]);
    }

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    char Name[] = {'s','e','n','g','u','l','\0'};

    int i;

    for(i = 0; i < 6; i++)
    {
        printf("Name[%d] = %c\n",i ,Name[i]);
    }
        return 0;
}
*/

//100 elemanlı int türden A dizisinin elemanlarına 2 den başlayarak cift sayıları atayan C kodunu yazınız
/*
#include <stdio.h>
#define SIZE 100
int main()
{
    int A[100],i;

    for(i = 0; i < SIZE ;i++)
    {
        A[i] = (i + 1) * 2;
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("A[%d] = %d\n",i , A[i]);
    }

    return 0;
}
*/
