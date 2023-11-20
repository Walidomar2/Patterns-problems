#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rowsNumber = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rowsNumber);

    int i,j,k;

    for(i=1;i<=rowsNumber;i++) // outer loop for rows
    {
        // loop to print spaces
        for(k=1;k<=rowsNumber-i;k++)
        {
            printf(" ");
        }
 
        // loop to print stars
        for(j=1;j<=i;j++)    // Inner loop for cols
        {
            printf("*");
        }
        printf("\n");
    }

    printf("------------------------------------------------------\n");

    for(i=1;i<=rowsNumber;i++) // outer loop for rows
    {
        // loop to print spaces
        for(k=2*(rowsNumber-i);k>=1;k--)
        {
            printf(" ");
        }
 
        // loop to print stars
        for(j=1;j<=i;j++)    // Inner loop for cols
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


