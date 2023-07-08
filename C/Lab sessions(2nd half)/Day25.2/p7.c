/*A program to to check if two strings are same or not*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20], b[20], char1, char2;
    int len1, len2, flag = 0;
    printf("Enter the first String: ");
    gets(a);
    printf("Enter the 2nd string: ");
    gets(b);
    len1 = strlen(a);
    len2 = strlen(b);
    printf("String 1:%s\n", a);
    printf("String 2:%s\n", b);
    for (int i = 0; i < len1; i++)
    {
        char1 = a[i];

        char2 = b[i];

        if (char1 != char2)
        {
            printf("Two strings are not same\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Two strings are same\n");
    }
}
