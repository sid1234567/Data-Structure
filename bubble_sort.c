#include<stdio.h>
int main()
{
    int a[100],i,n,k,d,swap;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    
    printf("Enter %d integers\n",n);
    
    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(k=0;k<(n-1);k++)
    {
        for(i=0;i<n-k-1;i++)
        {
            if(a[i]>a[i+1])
            {
                swap=a[i];
                a[i]=a[i+1];
                a[i+1]=swap;
            }
        }
    }
    printf("Sorted list in ascending order\n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}














