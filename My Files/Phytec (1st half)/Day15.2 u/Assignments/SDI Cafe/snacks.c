#include <stdio.h>

int f, g, total_bill, plates, b_1 = 0, b_2 = 0, b_3 = 0, b_4 = 0, b_5 = 0, b_6 = 0, b_7 = 0;
int tea = 6, coffee = 10, samosa = 5, chicken_pakoda = 60, fritters= 30, icecream = 40;

int snacks()
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
        printf("\n1- Tea\t\t\t6.00\n2- Coffee\t\t10.00\n3- Samosa\t\t5.00/piece\n4- Chicken Pakoda\t60.00(6 piece)\n5- Fritters\t\t30.00(150gm)\n6- Icecream\t\t40.00\n");
        scanf("%d", &f);

        switch (f)
        {
        case 1:
            printf("Tea\n");
            printf("Enter the number of cups you want to order:\n");
            scanf("%d", &plates);
            b_1 = tea * plates;
            printf("\nTea= %dRs", b_1);
            break;

        case 2:
            printf("Coffee\n");
            printf("Enter the number of cups you want to order:\n");
            scanf("%d", &plates);
            b_2 = coffee * plates;
            printf("\nCoffee= %dRs", b_2);
            break;

        case 3:
            printf("Samosa\n");
            printf("How many you want to order:\n");
            scanf("%d", &plates);
            b_3 = samosa * plates;
            printf("\nSamosa= %dRs", b_3);
            break;

        case 4:
            printf("Chicken Pakoda\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b_4 = chicken_pakoda * plates;
            printf("\nChiken Pakoda= %dRs", b_4);
            break;

        case 5:
            printf("Fritters\n\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b_5 = fritters * plates;
            printf("\nFritters= %dRs", b_5);
            break;

        case 6:
            printf("Icecream\n\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b_6 = icecream * plates;
            printf("\nIcecream= %dRs", b_6);
            break;
        default:
            printf("Error... Please select upto 7.\a");
        }

        printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
        scanf("%s", &g);

        if (g == 'y')
        {
            goto menu;
        }
        else if (g == 'n')
        {
            printf("\n------Bill------\n\n");
            printf("Customer Name:%s\n",name);
            total_bill = b_1 + b_2 + b_3 + b_4 + b_5 + b_6;
            printf("\nTotal Bill=%dRs\n\n", total_bill);
            printf("~~~~~~~~~THANKS FOR VISITING ~~~~~~~~~~\n");
        }
        break;

    case 2:
        printf("Please try again\n");
        break;
    }
}  