#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3][4]={{2,3,4,9},{1,7,8,0},{3,7,2,5}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int *b[3];
     b[0]=(int*)malloc(4*sizeof(int));
     b[1]=(int*)malloc(4*sizeof(int));
     b[2]=(int*)malloc(4*sizeof(int));
      printf("enter elements");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int**c;
    c=(int**)malloc(3*sizeof(int*));
     c[0]=(int*)malloc(4*sizeof(int));
     c[1]=(int*)malloc(4*sizeof(int));
     c[2]=(int*)malloc(4*sizeof(int));
      printf("enter elements");
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}