#include <stdio.h>

int breakfast();
int lunch();
int snacks();
int dinner();

int main()
{
    int c, n;
    printf("\n~~~~~~~~~~~~Welcome to SDI Cafeteria~~~~~~~~~~~~\n\n"); 
    printf("\t1- Main Menu\n\t2- Exit\n\nChoice is yours\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:

        printf("-----------------------------\n\t1- Breakfast\n\t2- Lunch\n\t3- Snacks\n\t4- Dinner\n----------------------\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:

            breakfast();
            break;

        case 2:
            lunch();
            break;

        case 3:
            snacks();
            break;

        case 4:
            dinner();
            break;

        default:
            printf("Error... Please select proper choice. ");
            break;
        }
    case 2:
        printf("------PLEASE VISIT AGAIN------ \n");
    }
}
