#include<stdio.h>
#include<stdlib.h>
struct Array
    {
        int A[15];
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
    printf("\n");

}
void append(struct Array *arr,int x)
{
    if(arr->length==arr->size)
    {
        printf("Array is full");
    }
   else
    { 
       arr->A[arr->length]=x;
       arr->length++;
    }
}
void insert(struct Array *arr,int p,int x)
{
    if(p>=0 && p<=arr->length)
    {
        for(int i=arr->length;i>=p;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
         arr->A[p]=x;
         arr->length++;
    }
}
int delete(struct Array *arr,int p)
{
    int x=-1;
    if(p>=0 && p<=arr->length)
    {
        x=arr->A[p];
        for(int i=p;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
         arr->length--;
    }
    return x;
}
int linearsearch(struct Array arr,int x)
{
    int p=-1;
        for(int i=0;i<arr.length;i++)
        {
            if(arr.A[i]==x)
            return i;
        }
    return p;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int improvelinearsearch(struct Array *arr,int x)
{
    int p=-1;
        for(int i=0;i<arr->length;i++)
        {
            
            if(arr->A[i]==x)
            {
                swap(&arr->A[i],&arr->A[0]);
                return 0;
            }

        }
    
    return p;
}
int binarysearch(struct Array arr,int x)
{
    int l=0;
    int h=arr.length-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr.A[m]==x)
            {
                return m;
            }
            else if(x<arr.A[m])
            {
                h=m-1;
            }
            else{
               l=m+1; 
            }
            
        }
    return -1;
}

int main()
{
   struct Array arr={{1,3,5,7,9},15,5};
    display(arr);
    // append(&arr,0);
    // // printf("%d",arr.length);
    // display(arr);
    // insert(&arr,2,7);
    // display(arr);
    // printf("%d",delete(&arr,2));
    // printf("\n");
    // display(arr);
    // printf("%d",linearsearch(arr,11));
    // printf("\n");
    // printf("%d",improvelinearsearch(&arr,9));
    // printf("\n");
    // display(arr);
    printf("%d",binarysearch(arr,7));
    printf("\n");
    return 0;
}