#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int num = 0, num1=0, i = 0, a = 0, b = 1, test = 1,c=0, velkost;
    num = atoi(argv[1]);
        if (num % 2 == 0)
    {
        printf("Neparne!!!!\n");    //osetrenie pre parne cisla
        return 0;
    }
	if (num < 0)
    {
	    printf("Kladne!!!!\n");
	return 0;
    }

    for (i = 0; i < num; i++)
    {
        printf("*");
    }                               //vypisanie prveho riadku hviezdiciek
    printf("\n");
    printf(" ");

    num1 = num;
    for (a = 0; a < num/2; a++)
    {
        num1 -= 2;                   //musi tam byt prvy odsek lebo tu sa odratava uz a potom by to nesedelo
        for (i = 0; i < num1; i++)
        {
            printf("*");                    //cyklus pre dalsie riadky
        }
        b++;
        
        printf("\n");
        
        if (a<((num / 2 )- 1))
        {
            for (c = 0; c < b; c++)
            {
                printf(" ");
            }
        }
        
    }
    b=num/2;
    
for (a = num/2+1; a < num; a++)
    {
        test += 2;
        b--;
        for(c=b;c>0;c--)
        {
            printf(" ");
        }                   //musi tam byt prvy odsek lebo tu sa odratava uz a potom by to nesedelo
        for (i = 0; i < test; i++)
        {
            printf("*");                    //cyklus pre dalsie riadky
        }
        printf("\n");
    }
}