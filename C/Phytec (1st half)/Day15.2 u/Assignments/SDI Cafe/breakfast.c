#include <stdio.h>

int a, b, total_bill, plates, bill1 = 0, bill2 = 0, bill3 = 0, bill4 = 0, bill5 = 0, bill6 = 0, bill7 = 0;
int Tea = 6, Coffee = 10, idli_sambar = 25, upma_sabzi = 20, chakuli_sabzi= 20, paratha_sabzi = 25, banana_standardsize = 5;

int breakfast()
{
    int c,name[30];
    printf("Please confirm 1 for yes 2 for No: ");
    scanf("%d", &c);

    printf("------Please enter your name------\n");
    scanf("%s",&name);


    switch (c)
    {
    case 1:

    menu:
        printf("1- Tea\n2- Coffee\n3- Idli sambar\n4- Upma sabzi\n5- Chakuli sabzi\n6- Paratha Sabzi\n7- Banana(Standard Size)\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            printf("Tea\n");
            printf("Enter the number of cups you want to order:\n");
            scanf("%d", &plates);
            bill1 = Tea * plates;
            printf("\nTea= %dRs", bill1);
            break;

        case 2:
            printf("Coffee\n");
            printf("Enter the number of cups you want to order:\n");
            scanf("%d", &plates);
            bill2 = Coffee * plates;
            printf("\nCoffee= %dRs", bill1);
            break;

        case 3:
            printf("Idli sambar\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bill3 =  idli_sambar* plates;
            printf("\nIdli sambar= %dRs", bill3);
            break;

        case 4:
            printf("Upma sabzi\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bill4 = upma_sabzi * plates;
            printf("\nUpma sabzi= %dRs", bill4);
            break;

        case 5:
            printf("Chakuli sabzi\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bill5 = chakuli_sabzi * plates;
            printf("\nChakuli sabzi= %dRs", bill5);
            break;

        case 6:
            printf("Paratha Sabzi\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bill6 = paratha_sabzi * plates;
            printf("\nParatha Sabz= %dRs", bill6);
            break;

        case 7:
            printf(" Banana(Standard Size)\n");
            printf("Enter how many you want to order:\n");
            scanf("%d", &plates);
            bill7 = banana_standardsize * plates;
            printf("\n Banana(Standard Size)= %dRs", bill7);
            break;

        default:
            printf("Error... Please select upto 10.\a");
        }

        printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
        scanf("%s", &b);

        if (b == 'y')
        {
            goto menu;
        }
        else if (b == 'n')
        {
            printf("\n----Bill----\n\n");
            printf("Customer Name:%s\n",name);
            total_bill = bill1 + bill2 + bill3 + bill4 + bill5 + bill6 + bill7;
            printf("\nTotal Bill=%dRs\n\n", total_bill);
            printf("~~~~~~~~~THANKS FOR VISITING ~~~~~~~~~~\n");
        }

    case 2:
        printf("Please try again\n");
        break;
    }
}