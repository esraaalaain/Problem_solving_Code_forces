#include <stdio.h>




    int main()
    {
        int score,players ,advancers[50],count=0,count2=0,temp=0,count3,i;
        scanf("%d %d",&players,&score);
        for ( i = 0; i < players; i++)
        {   
             scanf("%d",advancers[i]);
        }
        
        
        printf("%d",advancers[score]);

    }