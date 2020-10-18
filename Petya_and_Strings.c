#include <stdio.h>

int compare()
{ 
    char str1[100],str2[100];
    int sum1=0;
    gets(str1);
    gets(str2);
    sum1=strcasecmp(str1,str2);
    return sum1;
}


int main()
{
  int result=0 ;
  result = compare();
  printf("%d",result);
    return 0;
}
