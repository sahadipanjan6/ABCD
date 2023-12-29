/******************************************************************************

Write a C program to find out the summation of all the elements of 
Lower Triangular Matrix and summation of all elements of Upper Triangular 
Matrix.

*******************************************************************************/

#include <stdio.h>
#define MAXSIZE 10

int main()
{
    int i, j = 0;
    int r, c = 0;
    int sum_lower, sum_upper = 0;
    int matrix[MAXSIZE][MAXSIZE];
    
    printf("Enter order of matrix: ");
    scanf("%d %d", &r, &c);
    
    if(r != c)
        printf("Entered Matrix is NOT A SQUARE MATRIX!!!\n");
    
    else
    {
        printf("Enter %d elements of the matrix...\n", (r*c));
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
                scanf("%d", &matrix[i][j]);
        }
    }
    
    // finding summation of Lower triangular elements
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i > j)
                sum_lower = sum_lower + matrix[i][j];
        }
    }
    
    // finding summation of Upper triangular elements
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i < j)
                sum_upper = sum_upper + matrix[i][j];
        }
    }
    
    printf("Summation of Lower Triangular Elements = %d\n", sum_lower);
    printf("Summation of Upper Triangular Elements = %d\n", sum_upper);

    return 0;
}
