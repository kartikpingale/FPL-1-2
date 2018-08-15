/*
PROBLEM STATEMENT
Write a C program to check if (any one )
a) The number is perfect number or not. Hint: If sum of the factors (including 1 and excluding the number itself) is same as that of original number then the number is said to be perfect number.
b) The number is ‘neon’ number or not. Hint: If the sum of the digits of square of the number is the number itself, then the number is said to be neon. For example- 9, Square is 81 and 8+1=9.
c) The number is ‘Armstrong’ number or not. Hint: If sum of cubes of digits is equal to original number then the number is said to be Armstrong. For example- Number 153 is Armstrong number (1)3+(5)3+(3)3=153
*/

#include <stdio.h>

int main()
{
    int number, i, sum, choice;
    sum=0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Check for -\n1. Perfect number\n2. Neon number\n3. Armstrong number\nSelect your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            {
                for(i=1; i<number; i++)
                {
                    if(number%i==0)
                    {
                        sum+=i;
                    }
                }
                if(sum==number)
                {
                    printf("The number is a perfect number!\n");
                }
                else
                {
                    printf("The number is not a perfect number!\n");
                }
                break;
            }
        case 2:
            {
                break;
            }
        case 3:
            {
                break;
            }
        default:
            {
                printf("Invalid input! Enter a number between 1-3!");
                break;
            }
    }
    
    return 0;
}
