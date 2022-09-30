#include <stdio.h>

int main ()
{
    int hodnota = 0,i = 0,a = 0;
    printf("Zadaj neparne cislo: ");
    scanf("%d", &hodnota);
    if (hodnota % 2 == 0)
    {
        printf("Neparne!!!!\n");    //osternie pre parne cisla
        return 0;
    }

    
    
    for (i = 0; i < hodnota; i++)
    {
    printf("*");
    }                               //vypisanie prveho riadku hviezdiciek
    printf("\n");
    printf(" ");
    
    
    if (hodnota > a)
    {
    a++;
    hodnota -= 2;
    for (i = 0; i < hodnota; i++)
    {
    printf("*");
    }
    printf("\n");
    }
    
    /*
    hodnota -= 2;
    for (i = 0; i < hodnota; i++)
    {
    printf("*");
    }
    printf("\n");
    printf(" ");

    hodnota +=2;
    for (i = 0; i < hodnota; i++)
    {
    printf("*");
    }
    printf("\n");
    
    hodnota +=2;
    for (i = 0; i < hodnota; i++)
    {
    printf("*");
    }*/
    
}
//vyziadat si vstup //
//overit ci je dane cislo neparne alebo nie //
//vypisat pocet * a zmensovat to o 2
//treba dosiahnut 1 a potom zase zacat zvacsovat do zadanej velkosti
