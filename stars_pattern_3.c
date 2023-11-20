#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rowsNumber = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rowsNumber);

    int i,j;

    // first half of the pattern
    
    for(i=1;i<=rowsNumber;i++) // outer loop for rows
    {
        for(j=1;j<=i;j++)    // Inner loop for cols
        {
            printf("* ");
        }
        printf("\n");
    }

    // second half of the pattern

    for(i=rowsNumber-1;i>=1;i--) // outer loop for rows
    {
        for(j=1;j<=i;j++)    // Inner loop for cols
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


