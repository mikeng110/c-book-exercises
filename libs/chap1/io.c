#include "io.h"


void IODemo()
{
    int c = getchar();
	putchar(c);
    putchar('\n');
}

void IODemo2()
{
    int c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    putchar('\n');
}

void IODemo3()
{
    int c = getchar();
    while(c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    putchar('\n');
}

void PrintEOF()
{
    int c = EOF;
    printf("%d\n", c);
}
//write a program that counts blanks, tabs, and newlines
//first step makes a program that count 1 character

int occurancesOf(char ch, char *str)
{
    int i, counter;

    counter = 0;
    for(i = 0; str[i] != '\0'; i++)
    {
         if (str[i] == ch)
         {
             counter += 1;
         }
    }

    return counter;
}

void occurancesOf2(char ch[], char *str, int size)
{
    int i, chIndex;
    int * counter;

    counter = (int *)calloc(size, sizeof(int));

    for(i = 0; str[i] != '\0'; i++)
    {
        chIndex = 0;
        while(chIndex < size)
        {
            if (str[i] == ch[chIndex])
            {
                counter[chIndex] += 1;
            }
            chIndex += 1;
        }
    }

    chIndex = 0;
    printf("\nNumber of Occurances in: %s\n", str);
    while (chIndex < size)
    {
        printf("\t%c: %d\n", ch[chIndex], counter[chIndex]);
        chIndex += 1;
    }

    free(counter);
}