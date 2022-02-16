// Program treba naci sve parne i neparne brojeve u polja.

#include<stdio.h>

int main()
{
    int polje[10], Parni = 0, Neparni = 0, i;
    printf("Unesite 10 brojeva: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &polje[i]);
    for (i = 0; i < 10; i++)
    {
        if (polje[i] % 2 == 0)
            Parni++;
        else
            Neparni++;
    }
    printf("\nUkupan broj parnih brojeva je = %d", Parni);
    printf("\nUkupan broj neparnih brojeva je = %d", Neparni);
    return 0;
} 
