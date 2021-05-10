#include<stdio.h>
#include<ctype.h>

enum Boolean
{
    FALSE, TRUE
};

enum Boolean vocal(char c);

void main()
{
    char car;
    int numvocal = 0;

    puts("\nIntroduce un texto. Para terminar: INTRO.");
    while ((car = getchar()) != '\n')
    {
        if (vocal(tolower(car)))
            numvocal++;
    }
    printf("\nTotal de vocales leidas: %d\n", numvocal);
}
enum Boolean vocal(char c)
{
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return TRUE;
        default:
            return FALSE;
    }
}
