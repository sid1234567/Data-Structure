#include<stdio.h>
void linear(int[],int,int);
void main()
{
    int a[30],i,n,key;
    
    printf("\nHow many numbers you want to enter");
    scanf("%d",&n);
    printf(" Enter the array element");
    for(i=0;i!=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element which you want to search");
    scanf("%d",&key);
    linear(a,n,key);
    getch();
}

void linear(int a[],int n,int key)
{
    int i ,temp,flag=0,j;
    for(i=0;i!=n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\nNumber is found at %d position",i+1);
    else
    printf("\nNumber id not found");
}
















