#include <stdio.h>

int sol()
{
    int p1,p2,p3,result;

    scanf("%i %i %i",&p1,&p2,&p3);
    result=p1+p2+p3;
    if (result!=1&&result!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    

}



    int main ()
    {   
        int out=0;
        int players =0;
        scanf("%d",&players);
        for (int i = 0; i < players; i++)
        {
           out= sol()+out;
           
        }
        printf("%d",out);
    }