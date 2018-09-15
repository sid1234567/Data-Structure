#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();

int count = 0;

void main()
{
    int no,ch,e;
    
    printf("\n 1 - push");
    printf("\n 2 - pop");
    printf("\n 3 - top");
    printf("\n 4 - empty");
    printf("\n 5 - exit");
    printf("\n 6 - Display");
    printf("\n 7 - Stack Count");
    printf("\n 8 - Destroy Stack");
    
    create();
    
    while(1)
    {
    printf("\n Enter choice : ");
    scanf("%d",&ch);
    
    switch (ch)
        {
            case 1:
            printf("Enter the data : ");
            scanf("%d",&no);
            push(no);
            break;
        
            case 2:
            pop();
            break;
            
            case 3:
            if(top==NULL)
            printf("NO Element in the stack");
            else
            {
                e=topelement();
                printf("\n Top element : %d",e);
            }
            break;
        
            case 4:
            empty();
            break;
            
            case 5:
            exit(0);
            
            case 6:
            display();
            break;
            
            case 7:
            stack_count();
            break;
            
            case 8:
            destroy();
            break;
                
            default :
            printf("Wrong choice, Please enter correct choice  ");
            break;
        
        }
    }
}

//Create empty stack

void create()
{
    top=NULL;
}

//Count stack element

void stack_count()
{
    printf("\nNo. of elements in stack : %d", count);
}

//push data in to stack
void push(int data)
{
    if (top==NULL)
    {
        top=(struct node *)malloc(1 *sizeof(struct node));
        top->ptr=NULL;
        top->info=data;
    }
    else
    {
        temp=(struct node *)malloc(1 *sizeof(struct node));
        temp->ptr=top;
        temp->info=data;
        top=temp;
    }
    count++;
}

//display stack elements

void display()
{
    top1=top;
    
    if(top1!=NULL)
    {
        printf("stack is empty");
        return;
    }
    while(top!=NULL)
    {
        printf("%d ",top1->info);
        top1=top1->ptr;
    }
}

//pop operation on stack
void pop()
{
    top1=top;
    
    if(top1==NULL)
    {
        printf("\nError :Trying to pop from empty stack");
        return;
    }
    else
    top1=top1->ptr;
    printf("\nPopped value :%d",top->info);
    free(top);
    top=top1;
    count--;
}

//return top elements
int topelement()
{
    return(top->info);
}

//check if stack is empty or not
void empty()
{
    if(top==NULL)
    printf("\nstack is empty");
    else
    printf("\nstack is not empty with %d elements",count);
}

//destroy entire stack
void destroy()
{
    top1=top;
    while(top1!=NULL)
    {
        top1=top->ptr;
        free(top);
        top=top1;
        top1=top->ptr;
    }
    free(top1);
    top=NULL;
    
    printf("\nall stack elements destroy");
    count =0;
}




