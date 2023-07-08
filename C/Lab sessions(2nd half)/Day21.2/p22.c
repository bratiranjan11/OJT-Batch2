/*a program to search an element in an array*/

#include <stdio.h>

 

int main()
{
    int a[10];
    int s, i, search, found=0;

    
    printf("Enter size of array: ");
    scanf("%d", &s);


    printf("Enter elements in the array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &search);
    

    
    for(i=0; i<s; i++)
    {
    
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }


    if(found == 1)
    {
        printf("\n%d is found at position %d", search, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", search);
    }

    return 0;
}