#include <stdio.h>

int d, e, total_bill, plates, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0, b6 = 0, b7 = 0;
int Veg_meal = 80, Nonveg_meal = 130, Chicken_FriedRice = 110, Egg_FriedRice = 90, Chilli_Chicken = 120, Egg_Bhurji = 55, Dahi = 15;

int lunch()
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
        printf("1- Veg Meal\t\t80.00\n2- Non-veg Meal\t\t130.00\n3- Chicken Fried Rice\t110.00\n4- Egg Fried Rice\t90.00\n5- Chilli Chiken\t120.00\n6- Egg Bhurji\t\t55.00\n7- Dahi\t\t\t15.00\n");
        scanf("%d", &d);

        switch (d)
        {
        case 1:
            printf("Veg Meal\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b1 = Veg_meal * plates;
            printf("\nVeg Meal= %dRs", b1);
            break;

        case 2:
            printf("Non-veg meal\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b2 = Nonveg_meal * plates;
            printf("\nNon-veg meal= %dRs", b2);
            break;

        case 3:
            printf("Chicken Fried Rice\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b3 = Chicken_FriedRice  * plates;
            printf("\nChicken Fried Rice= %dRs", b3);
            break;

        case 4:
            printf("Egg Fried Rice\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b4 = Egg_FriedRice * plates;
            printf("\nEgg Fried Rice= %dRs", b4);
            break;

        case 5:
            printf("Chilli Chiken\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b5 = Chilli_Chicken * plates;
            printf("\nChilli Chiken= %dRs", b5);
            break;

        case 6:
            printf("Egg Bhurji\n");
            printf("Enter the plates you want to order:\n");
            scanf("%d", &plates);
            b6 = Egg_Bhurji * plates;
            printf("\nEgg Bhurji= %dRs", b6);
            break;

        case 7:
            printf(" Dahi\n");
            printf("Enter how many you want to order:\n");
            scanf("%d", &plates);
            b7 = Dahi * plates;
            printf("\n Dahi= %dRs", b7);
            break;

        default:
            printf("Error... Please select upto 10.\a");
        }

        printf("\n\nDO YOU WANT TO CONTINUE ON MENU\n(Press'y' for yes\nPress 'n'for No)\n");
        scanf("%s", &e);

        if (e == 'y')
        {
            goto menu;
        }
        else if (e == 'n')
        {
            printf("\n----Bill----\n\n");
            printf("Customer Name:%s\n",name);
            total_bill = b1 + b2 + b3 + b4 + b5 + b6 + b7;
            printf("\nTotal Bill=%dRs\n\n", total_bill);
            printf("~~~~~~~~~THANKS FOR VISITING ~~~~~~~~~~\n");
        }

    case 2:
        printf("Please try again\n");
        break;
    }
}