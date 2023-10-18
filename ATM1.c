#include <stdio.h>
#include <string.h>

char USERNAME[] = "abc";
int PIN = 123;
double amount, balance = 0;

int check_credentials(int b)
{
    if (b == PIN)
    {
        return 1;
    }
    else{
        printf("INVALID CREDENTIALS\n");
        return 0;
    }
}

int atm_functions()
    {
        int choice;
        printf("WELCOME TO HDFC BANK\n");
        printf("1 AMOUNT DEPOSITION\n");
        printf("2 AMOUNT WITHDRAWAL\n");
        printf("3 CHECKING INFO\n");
        printf("4 PIN UPDATE\n");
        printf("5 EXIT\n");
        printf("ENTER YOUR CHOICE : \n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                printf("AMOUNT DEPOSITION \n");
                printf("ENTER AMOUNT : ");
                scanf("%lf", &amount);
                balance = balance + amount;
                printf ("NEW BALANCE : %lf", balance);
            }
            break;
            case 2:
            {
                printf ("ENTER THE AMOUNT TO BE WITHRAWN : ");
                double withdraw;
                scanf("%lf", &withdraw);
                balance = balance - withdraw;
            }
            break;
            case 3:
            {
                printf ("NAME : %s\n", USERNAME);
                printf("ACCOUNT NUMBER : 1231800614\n");
                printf("TOTAL SAVINGS : %lf", balance);
            }
            case 4:
            {
                int old_pin, new_pin;
                printf("ENTER OLD PIN : \n");
                scanf("%d", &old_pin);
                printf("ENTER NEW PIN : \n");
                scanf("%d", &new_pin);
                if (PIN == old_pin)
                {
                    if (new_pin == PIN)
                    {
                        printf("PLEASE ENTER A NEW PIN");
                    }
                    else
                    PIN = new_pin;
                }
                else{
                    printf("PLEASE RE-ENTER YOUR PIN");
                    }
            }
        }
    }

int main()
{
    int n = 1;
    while (n>0)
    {
        char user[80];
        int pin;
        printf("Enter username : ");
        scanf("%s", user);
        printf("Enter PIN : ");
        scanf("%d", &pin);
        if (check_credentials(pin))
        {
            printf("ACCESS GRANTED\n");
            atm_functions();
        }
        else
        {
            printf("ACCESS DENIED\n");
        }
    }
}
