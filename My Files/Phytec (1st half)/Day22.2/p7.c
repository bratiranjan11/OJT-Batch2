/*sum of two numbers using command line arguments*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, n, sum = 0;
    for (i = 1; i < argc; i++)
    {
        sscanf(argv[i], "%d", &n);
        sum += n;
    }
    printf("%d\n", sum);

    printf("%s\n", argv[0]);

    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}
