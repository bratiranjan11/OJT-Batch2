/*Logic Of ATM Machiene

Developer-Bratiranjan Acharya*/


#include <stdio.h>
#include "atmheader.h"

int main()
{
    int z;
    float x, y;
    char ch;

    tryyagainn:
    printf("-#-#-#-#-#-#-#-#-#-#Welcome tou Our ATM Service-#-#-#-#-#-#-#-#-#-#\n");
    printf("Please Select your Account Number:\n\t1.4368295164\n\t2.7897256724\n\t3.2465765638\n");
    scanf("%d", &z);
    switch (z)
    {
    case 1:
        printf("~~~~~~Welcome Gopal Sir~~~~~~\n");
        Acc1();
        break;
        

    case 2:
        printf("~~~~~~Welcome Bratiranjan Acharya~~~~~~\n");
        Acc2();
        break;
    case 3:
         printf("~~~~~~Welcome PHYTEC Ltd.~~~~~~\n");
         Acc3();
        break;

        default:
            printf(" Please choose correct option for operation\n");
            goto tryyagainn;
            break;
        }
        return 0;
    }

