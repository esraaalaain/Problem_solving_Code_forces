#include <stdio.h>


int matrix[5][5],row,col ,i,j;
int butmatrix()
{
        for ( i = 0; i < 5; i++)
        {  
            for ( j = 0; j < 5; j++)
            {
                scanf("%d",&matrix[i][j]);
                if (matrix[i][j]==1)
                {
                    row=i;
                    col= j;
                   return 0;
                }
               

            }
        }
    
}

int main() 
{
    butmatrix();
    col=abs(col-2);
    row=abs(row-2);
    printf("%d",col+row);
    return 0;
}