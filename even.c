#include <stdio.h>

int w=0;
int even =0 ;
int main ()
{
    scanf("%d",&w);
    even=w%2;
if(even==1||w==2)
{
   printf("NO"); ;
}
else {
    printf("YES");

}
    return 0;
}