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
        for(k=i;k<=rowsNumber;k++)
        {
            printf(" ");
        }

         // loop to print stars
        for(j=1;j<=i;j++)    
        {
            printf("*");
        }
 
        printf("\n");
    }

    for(i=1;i<=rowsNumber-1;i++) // outer loop for rows
    {
        // loop to print spaces
        for(j=0;j<=i;j++)    
        {
            printf(" ");
        }

        // loop to print stars
        for(k=i;k<=rowsNumber-1;k++)
        {
            printf("*");
        }
 
        printf("\n");
    }

    return 0;
}


