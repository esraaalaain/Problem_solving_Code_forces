#include <stdio.h>

char colors[50];
    int stones,temp=0;

 int main() 
{
    
    scanf("%d",&stones);
    for (int  i = 0; i < stones; i++)
    {
        scanf("%s",&colors[i]);
    }
    for (int i = 0; i < stones; i++)
    {
        if (colors[i]==colors[i+1])
        {   
            temp++;
        }
    }
    printf("%d",temp);
    return 0;
}