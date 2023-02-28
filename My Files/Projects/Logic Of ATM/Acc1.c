#include <stdio.h> // 1st source file with 1st account number
#define SECURITY 1234
int Acc1() // Function declare
{

    int pin, constpin = 7616, oldpin, newpin, securepin,choose;
    float x, y;
    char ch;

    printf("Please First Enter The Initial Amount In Your Account:\n");
    scanf("%f", &x);

tryagain:
    printf("******Welcome to our service please select******\n D for Deposit \n W for Withdraw \n B for Balance \n P for Pin change\n E for Exit\n");
    scanf("\n%c", &ch);

    switch (ch)
    {

    case 'D':

        printf("Please Enter Your Pin: ");
        scanf("%d", &pin);
        if (pin == constpin)
        {
            printf("Enter the amount to be deposited: \n");
            scanf("%f", &y);
            x = x + y;
            printf("\nProcessing please wait...\n\n\nAmount added Successfully\nNet amount=%.2f\n", x);
            goto tryagain;
        }
        else
        {
            printf("You have entered a Wrong pin please try again\n");
            goto tryagain;
        }
        break;

    case 'W':

        printf("Please Enter Your Pin: ");
        scanf("%d", &pin);
        if (pin == constpin)
        {
            printf("Please enter the withdraw amount: \n");
            scanf("%f", &y);
            if (x >= y)
            {
                x = x - y;
                printf("\nProcessing please wait...\n\n\nPlease collect your cash\nNet Balance=%.2f\n", x);
                goto tryagain;
            }
            else
            {
                printf("Insufficient Balance=%.2f\n", x);
                goto tryagain;
            }
        }
        else
        {
            printf("You have entered a Wrong pin please try again\n");
            goto tryagain;
        }

        break;
    case 'B':
        printf("Please Enter Your Pin: ");
        scanf("%d", &pin);
        if (pin == constpin)
        {
            printf("Balance:%.2f\n", x);
            goto tryagain;
        }
        else
        {
            printf("You have entered a Wrong pin please try again\n");
            goto tryagain;
        }
        break;

    case 'P':
        printf("Remember you old pin?\n");
        printf("Press 1 for Yes and 2 for no:");
        scanf("%d", &choose);

        if (choose == 1)
        {

            printf("Please enter your old pin");
            scanf("%d", &oldpin);
            if (oldpin == constpin)
            {
                printf("Enter your new pin:");
                scanf("%d", &newpin);
                constpin = newpin;
                printf("Your pin was changes succesfully: \n");
                goto tryagain;
            }
            else
            {
                printf("You have entered a wrong pin please try again...\n");
                goto tryagain;
            }
        }

        else if (choose == 2)
        {
            printf("Enter Your Security pin:");
            scanf("%d", &securepin);
            if (securepin == SECURITY)
            {
                printf("Enter your new pin:");
                scanf("%d", &newpin);
                constpin = newpin;
                printf("Your pin was changes succesfully: \n");
                goto tryagain;
            }
            else
            {
                printf("You have entered a wrong security pin\nPlease Try Again\n");
                goto tryagain;

            }
        }
        else
        {

            printf("Please choose a correct option and try again...\n");
            goto tryagain;
        }
        break;

    case 'E':

        printf("Thank you Please visit again:\n");
        break;

    default:
        printf(" Please choose correct option for operation\n");
        goto tryagain;
        break;
    }
    return 0;
}
