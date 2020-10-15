#include <stdio.h>

char string [100];

void num()
{
           int count=0;
        int  i;
        scanf("%s",string);
        for (  i = 0;string[i]!=' '&& string[i]!='\0' ; i++)
        {
             count ++;   
        }
        if (count<=10)
        {
            printf("%s\n",string);
        }
        else
        {
            printf("%c%d%c\n",string[0],count-2,string[count-1]);
        }
 
}
    int main()
    {
        int loop ;
        scanf("%i",&loop);
        for (int j = 0; j < loop; j++)
        {
            num();
        }
        
       return 0; 
    }
   