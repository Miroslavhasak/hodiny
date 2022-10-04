#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(int argc, char** argv)
{
    int x, y, z;
    printf("zadaj sirku presypacich hodin: ");
    scanf("%d", &z);
    if (z > 0 && (z% 2) != 0)//ak je velkost piramidy neparne a kladne cislo pokracuj
    for (x = z / 2 + 1; x > 1; x--)
    {
        for (y = x; y < z; y++)
        {
            printf(" ");
        }
        for (y = 1; y <= (2 * x - 1); y++)
        {
            printf("*");
        }
        printf("\n");
    }
    else { //inak zastav program
        printf("Nespravny vstup ");
        return 0;
    }

    for (x = 1; x <= z / 2 + 1; x++)
    {
        for (y = x; y < z; y++)
        {
            printf(" ");
        }
        for (y = 1; y <= (2 * x - 1); y++)
        {
            printf("*");
        }
        printf("\n");
    }
}