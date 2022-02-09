#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
     int balance = 0;
     int amount = 0;
     int expenses = 0;
     int income = 0;

     printf ("%s\n", "Enter your (+) income or (-) expenses. Or type 0 to exit.");
     do
     {
         printf ("Your current balance is: %d\n", balance);
         printf("--------------------\n");
         printf ("%s\n", "Enter the amount:");
         scanf ("%d", & amount);
         if (amount <0) {
             expenses = expenses + amount;
             balance = balance + amount;

         }
         if (amount> 0) {
             income = income + amount;
             balance = balance + amount;
         }
     }
     while(amount!=0);

     // OUTPUT
     printf ("Total amount of expenses is: %d\n", expenses);
     printf ("Total amount of income is: %d\n", income);
     printf ("Current balance is: %d\n", balance);

    printf("\n");

    system("PAUSE");
    return 0;

}
