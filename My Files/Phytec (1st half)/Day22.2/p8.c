#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (strcmp(argv[1], "-s") == 0)
    {
        int i, n, sum = 0;
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            sum += n;
        }
        printf("%d\n", sum);
    }

    if (strcmp(argv[1], "-p") == 0)
    {
        int i, n, mul = 1;
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            mul = mul * n;
        }
        printf("%d\n", mul);
    }


    if (strcmp(argv[1], "-d") == 0)
    {
        int i, n, div=2;
        for (i = 2; i < argc; i++)
        {
            sscanf(argv[i], "%d", &n);
            div = div / n;
        }
        printf("%d\n", div);
    }
}
