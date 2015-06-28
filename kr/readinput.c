#include <stdio.h>

main()
{
    char c;
/*
    c = getchar();
    while (c != EOF) {
        short s = c;
        printf("%d\n", s);
        c = getchar();
    }
*/
    while ((c = getchar()) != EOF)
        putchar(c);
}
