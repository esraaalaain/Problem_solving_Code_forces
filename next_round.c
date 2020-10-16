#include <stdio.h>




    int main()
    {
        int Score,players,i,count=0,count2=0;
        int advancers[50];
        scanf("%d %d",&players,&Score);

        for ( i = 1; i <= players; i++)
        {   
             scanf("%d",&advancers[i]);
            
        }//array 

        for (int j = 1; j <= players; j++)
        {
           if (advancers[j] >= advancers[Score]&&advancers[j]!=0)
           {
               count++;
           }
          else if (count==0 && advancers[j] <=advancers[Score] && advancers[j]!=0 )
           {
               count2++;
           }
           
        }
       if (count==0)
        {
            count=count2;
        }

         printf("%d",count);
                 

        return 0;
    }