#include <stdio.h>

int h, i, total_bill, plates, bd_1 = 0, bd_2 = 0, bd_3 = 0, bd_4 = 0, bd_5 = 0, bd_6 = 0, bd_7 = 0;
int Roti = 4, Chicken_kassa = 110, Chicken_Afgani = 150, Egg_curry = 70, chilli_Chicken = 120, Naan =15, Barfi = 10;

int dinner()
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
        printf("1- Roti\t\t\t4.00/piece\n2- Chiken Kassa\t\t110.00\n3- Chicken Afgani\t150.00\n4- Egg Curry\t\t70.00\n5- Chilli Chiken\t120.00\n6- Naan\t\t\t15.00/piece\n7- Barfi\t\t10.00/piece\n");
        scanf("%d", &h);

        switch (h)
        {
        case 1:
            printf("Roti\n");
            printf("Enter how many you want to order:\n");
            scanf("%d", &plates);
            bd_1 = Roti * plates;
            printf("\nRoti= %dRs", bd_1);
            break;

        case 2:
            printf("Chicken Kassa\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bd_2 = Chicken_kassa * plates;
            printf("\nChicken Kassa= %dRs", bd_2);
            break;

        case 3:
            printf("Chicken Afgani\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bd_3 = Chicken_Afgani * plates;
            printf("\nChicken Afgani= %dRs", bd_3);
            break;

        case 4:
            printf("Egg curry\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bd_4 = Egg_curry * plates;
            printf("\nEgg Curry= %dRs", bd_4);
            break;

        case 5:
            printf("Chilli Chiken\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bd_5 = chilli_Chicken * plates;
            printf("\nChilli Chiken= %dRs", bd_5);
            break;

        case 6:
            printf("Naan\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            bd_6 = Naan * plates;
            printf("\nNaan= %dRs", bd_6);
            break;

        case 7:
            printf(" Barfi\n");
            printf("Enter how many you want to order:\n");
            scanf("%d", &plates);
            bd_7 = Barfi * plates;
            printf("\n Barfi= %dRs", bd_7);
            break;

        default:
            printf("Error... Please select upto 10.\a");
        }

        printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
        scanf("%s", &i);

        if (i == 'y')
        {
            goto menu;
        }
        else if (i == 'n')
        {
            printf("\n------Bill------\n\n");
            printf("Customer Name:%s\n",name);
            total_bill = bd_1 + bd_2 + bd_3 + bd_4 + bd_5 + bd_6 + bd_7;
            printf("\nTotal Bill=%dRs\n\n", total_bill);
             printf("~~~~~~~~~THANKS FOR VISITING ~~~~~~~~~~\n");
        }

    case 2:
        printf("Please try again\n");
        break;
    }
}