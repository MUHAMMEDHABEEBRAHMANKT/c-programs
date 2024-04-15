/*
    THIS IS A SMALL ATM MECINE CONCEPT BASED C PROGRAM .DEVELOPED BY HABEEB RAHMAN K T,
    THIS PROGRAM IS USER FRIENDLY ,UNDERSTANDS FOR BEGGINER (BEGGIER FRIENDLY) PROGRAM

    THIS IS A OPEN SOURCE PROGRAMM,

    THE PIN NUMBER OF THE A IS 0000
    
    

    GITHUB: @MHAMMEDHABEEBRAHMANKT

    INSTAGRAM:@kt_habeeb_

    YOUTUBE :@coding_with_mayavi0

    THANK YOU FOR REFFERING THIS SMALL PROJECT

*/
#include <stdio.h>
#include <conio.h>
int main()
{
    // variable declaration
    int userPin, pinNumber = 0000;   // FOR PIN CHEKING
    int balence = 1000;              // MIAN BALECE
    int option;                      // TAKING OPTION VALUES
    int depositAmount;               // STORE CREDIT AMMOUNT
    int withdrawAmount;              // STORE DEBIT AMMOUNT
    int statement[10], i = 0, j = 0; // FOR STATEMENT ARRAY
    int transactionLimit = 10;       // FOR TRANSACTION LIMIT

    printf(" WELCOME TO ATM ");                       // welcome msg
    printf("\n PLEASE ENTER YOUR PIN TO CONTINUE :"); // asking pin
    scanf("%d", &userPin);                            // takin pin
    if (userPin == pinNumber)                         // chekking pin is right | not
    {

        for (;;) // inifinity loop
        {
            printf("\n 1. DEPOSIT\n 2. WITHDRAW\n 3. CHECK BALENCE\n 4. MINI STATEMENT\n 5. EXIT\n --> CHOOSE AN OPTION <--\n");
            printf(" YOU HAVE %d LIMIT LEFT\n", transactionLimit);
            scanf("%d", &option); // taking input
            if (option == 1)
            {
                printf(" ENTER THE AMMOUNT :");
                scanf("%d", &depositAmount);  // taking deposit ammount
                balence += depositAmount;     // balence = balence + depositAmount;
                statement[i] = depositAmount; // adding this transaction to the array
                i++;                          // incrementing the position
                transactionLimit--;           // decreesing transaction limit
            }
            else if (option == 2)
            {
                printf(" ENTER THE AMMOUNT :");
                scanf("%d", &withdrawAmount);         // taking withdraw ammount
                balence -= withdrawAmount;            // balence = balence - withdrawAmount ;
                statement[i] = -1 * (withdrawAmount); // adding minus symbol to this this ammount too see its debited
                i++;                                  // incrementing the position
                transactionLimit--;                   // decreesing transaction limit
            }
            else if (option == 3)
            {
                printf(" \n\nYOUR BALENCE IS : %d \n\n", balence); // printing the balence
            }
            else if (option == 4)
            {

                printf(" \n\nYOUR LAST TRANSACTIONS :\n");
                for (j = 0; j < 10 - transactionLimit; j++) // loop for print mini statement array leng will bw calulated by array size - transaction limit
                {
                    if (statement[j] != '\0')
                    {

                        printf(" %d-> %d \n", j + 1, statement[j]); // printing a stander way
                    }
                    else
                    {
                        printf("NO TRANSACTION FOUND !");
                    }
                }
            }
            else if (option == 5)
            {
                // option for exit the loop and end the transaction process
                break;
            }
            else
            {
                printf(" YOU ENTERD A WRONG OPTION PLZ CHOOSE RIGHT OPTION !\n"); // printig error msg
            }

            if (transactionLimit == 0)
            { // when transsaction is 0 also exiting the loop
                printf(" YOUR TRANSACTION LIMIT EXEEDED !!");
                break;
            }
        }
    }
    else
    {
        // eroor for pin number
        printf(" YOUR PIN NUMBER IS WRONG !!\n PLEASE TRY AGAIN\n\n\n");
    }
    // a feed back msg
    printf(" THANK YOU FOR USING OUR ATM SERVICE\n PLEASE INFORM YOUR FEEDBACK USING THE LINK GIVEN BELOW\n www.myatm.feedback.com ");
    return 0;
}
