//WAP to access elements using pointer.
#include<stdio.h>
void main()
{
    int a[10]={1,4,3,2,5,6,9,8,7,0};
    int *p,i;
    p=&a[0];
    for(i=0;i<10;i++)
    {
        printf("\n value=%d & position=%d",a[i],i+1);
    }
}
