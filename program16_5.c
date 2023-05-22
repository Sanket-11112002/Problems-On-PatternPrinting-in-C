/*
5. Accept number of rows and number of columns from user and display below 
pattern. 
Input : iRow = 3 iCol = 4 
Output :
 1 2 3 4 
 5 6 7 8 
 9 10 11 12
 
 */ 

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 0;
    
    for(i = 1, iNo = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++,iNo++)
        {
            printf("%d\t",iNo);
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns:\n");
    scanf("%d",&iValue2);
    
    Pattern(iValue1,iValue2);

    return 0;
}