
#include <stdio.h>
int main()
{
   int amount,deposit,withdraw,choice;
    printf("Name: Mark Muuo\n Reg No.:C026-01-0897/2022\n");
    printf("Enter your initial opening account balance:\n");
    scanf("%d",&amount);
    printf("-----@@WELCOME TO ATM@@------\n");
    while (choice)
    {
    printf("Options:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Quit\n");
    printf("Select an option:\n");
    scanf("%d",&choice);
    if(choice>4)
    {
    printf("Invalid choice\nselect again\n");
    }
    else
    {

    switch (choice)
    {
    case 1:
    printf("Your Account Balance is %d\n",amount);
    break;

    case 2:
    printf("Enter the amount you wish to deposit:\n");
    scanf("%d",&deposit);
    amount=amount+deposit;
    printf("\n Your new ATM balance is: %d\n",amount);
    break;
    case 3:
    printf("Enter amount you wish to withdraw\n");
    scanf("%d",&withdraw);
    if(amount>withdraw)
    {
    amount=amount-withdraw;
    printf("Your new balance is:\n %d",amount);
    }
    else
    {
    printf("insufficient funds\n");
    }
    default:
    printf("Thank you for choosing us!!!!\n");
    }
    }
    }


   return 0;
    }
