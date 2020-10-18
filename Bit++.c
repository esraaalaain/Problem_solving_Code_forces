#include<stdio.h>


int main()
{
    int NUM_STAT,X=0, i;
    char STAT[4];
    
    scanf("%d",&NUM_STAT);
    for (i = 0; i < NUM_STAT; i++)
    {
       scanf("%s",&STAT);
       if (STAT[1]=='+')
       {
           X++;
       }
       else
       {
          X--; 
       }
       
    }
    printf("%d",X);
    return 0;
}