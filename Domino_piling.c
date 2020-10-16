#include <stdio.h>


int main()
{
    int domino,M,N,board;
    scanf("%d %d",&M,&N);
    board=M*N;
    domino=2;
    printf("%d",board/domino);
    return 0;
}