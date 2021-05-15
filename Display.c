#include<stdio.h>
#include<stdlib.h>
struct Array
    {
        int *A;
        int size;
        int length;
    };
void display(struct Array arr)
{
    printf("elements are  ");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }

}
int main()
{
   struct Array arr;
   printf("enter size ");
   scanf("%d",&arr.size);
   arr.A=(int*)malloc(arr.size*sizeof(int));
   printf("enter length ");
   scanf("%d",&arr.length);
    printf("enter elements ");
    for(int i=0;i<arr.length;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    display(arr);
    return 0;

}