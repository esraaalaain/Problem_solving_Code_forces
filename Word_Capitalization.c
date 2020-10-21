#include <stdio.h>




    int main ()
    {   char word[1000];
        int len ;
        
        scanf("%s",&word);
        len= strlen(word);
        for (int i = 0; i < len; i++)
        {   
            if (word[0]<='z'&& word[0]>='a')//-32
            {
                word[0]=word[0]-32;
            }
             printf("%c",word[i]);
        }
        return 0;
    }       