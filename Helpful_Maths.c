#include <stdio.h>
#include <string.h>

void BUBBLE_SORT(char * DATA , char N)
{
    char PASS;
    char INDEX ;
    int COUNT=0;
    int CHECK=0;
    for (PASS = N ; PASS > 0; PASS--)
    {  
        for( INDEX=0 ; INDEX <PASS-1 ; INDEX ++)
        {   
            
            if (DATA [INDEX] > DATA[INDEX+1])
            {  
                 
                 int temp=0;
                 temp=DATA[INDEX];
                 DATA[ INDEX ]=DATA[ INDEX+1 ];
                 DATA[INDEX+1] =temp;
            }       
             else 
              { 
                  CHECK++;
                  COUNT++;
              } 
            
        }

     COUNT=0;
    }
} 

 int main()
{   
    char str[1000], c_str[1000];
    int len,i,y,j,m=0;
    scanf("%s",&str);
    len = strlen(str);
    BUBBLE_SORT(str,len);

m=(len-1)/2;

        for(i=m ; i<len ; i++)//without+
        {
            c_str[i]=str[i];
        }
        i=0;
        for(y=0; y < len; y++)//with + and numbers
        {   
            if (y%2==0)//even number
            {
            str[y]=c_str[m];
            m++;  
            }
            else if (y%2==1)//odd number
            {
                str[y]='+';
            }
        }
for ( j = 0; j < len; j++)
    {    
        printf("%c",str[j]);
    }
    return 0;
}