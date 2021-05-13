#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*p,*q;
    p=(int*)malloc(5*sizeof(int));
    q=(int*)malloc(10*sizeof(int));
    p[0]=2;
    p[1]=4;
    p[2]=6;
    p[3]=8;
    p[4]=10;
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    printf("\n");
    p[5]=7;
    p[6]=98;
    p[7]=9;
    for(int i=0;i<8;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;

}