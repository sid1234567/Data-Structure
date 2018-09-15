#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX_SIZE 100

int main()
{
    int item,choice,i;
    int arr_queue[MAX_SIZE];
    int rear;
    int front;
    int exit=1;
    
    printf("\nSimple queue Example - Array");
    do
    {
        printf("\n\nQueue Main Menu");
        printf("\n1.Insert \n2.Remove \n3.Display \n4.Others to exit");
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if (rear==MAX_SIZE)
            printf("\n## Queue reached Max!!");
            else
            {
                printf("\nEnter the value to be insert : ");
                scanf("%d",&item);
                printf("\n## Postion : %d ,Insert value : %d ",rear+1,item);
                arr_queue[rear++]=item;
            }
            break;
            
            case 2:
            if(front==rear)
                printf("\n## Queue is empty!");
            else
            {
                printf("\n##Postion : %d ,Remove value : %d",front,arr_queue[front]);
                int temp= front;
                front++;
            }
            break;
            case 3:
            printf("\n## Queue size : %d",rear);
            for(i=front;i<rear;i++)
            printf("\n## Postion : %d ,Value : %d",i,arr_queue[i]);
            break;
            default:
            exit =0;
            break;
        }
    }
    while(exit);
    return 0;
}
















