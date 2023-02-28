#include <stdio.h>

int main()
{
    static int a = 1;
    
        {
        static int a = 2;

        {
            {
            static int a = 3;
            {
                printf("%d\n", a);
            }
            }

            printf("%d\n", a);
        }

        printf("%d\n", a);
    }
    
}