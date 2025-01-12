#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front=-1,rear=-1;

void enque()
{
    int info;
    if(rear==MAX-1)
    {
        printf("\n queue overflow \n");
        return;
    }
    else{
        printf("\n Enter for queue values ->");
        scanf("%d",&info);
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=info;
        printf("\ninserted succefully ");
    }
}
void deque()
{
    if(front==-1&&rear==-1)
    {
        printf("\n queue under flow");
    }
    else if(front==rear)
    {
        printf("\n deleting %d from queue ",queue[front]);
        front=rear=-1;
    }
    else{
        printf("\n deleting %d from queue ",queue[front]);
        front++;
    }
}

void peek()
{
    if(front==-1 &&rear==-1)
    {
        printf("\nqueue under flow");
    }
    else{
        printf("\n the top most element is -> %d ",queue[front]);
    }
}
void display()
{
    int i;
    if(front==-1 && rear ==-1)
    {
        printf("queue under flow");
    }
    else{
        printf("\nqueue ");
        for(i=front;i<=rear;i++)
        {
            printf("-> %d",queue[i]);
        }
    }
}

void counter()
{
    int i,count=1;
    if(front==-1 && rear ==-1)
    {
        printf("queue under flow");
    }
    else{
        // printf("\nqueue ");
        for(i=front;i<=rear;i++)
        {
        //  printf(" ");
        count++;
        }
        printf("queue containts %d element ",count);
    }
}
void isempty()
{
  if(front==-1 && rear==-1)
  {
    printf("\nqueue is empty");
  }
  else
    printf("\nqueue is not empty ");
return;
}
int main()
{
    int choice,n;
 while(1)
 {
    printf("\n QUEUE WITH ARRAY ");
    printf("\n1. enqueue\n2. dequeue\n3. peek\n4. display\n5. isempty\n6. counter\n7.exit");
    printf("\nEnter your choice ->");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("\nhow many elements you want in queue (size 10) ->");
                scanf("%d",&n);
                for(int i=0;i<n;i++)
                {
                    enque();
                }
                break;
        case 2:
                deque();
                break;
        case 3:
                peek();
                break;        
        case 4:
                display();
                break;  
        case 5:
                isempty();
                break;
        case 6:
                counter();
                break;        
        case 7:
                exit(0);
                break;
        default:
                printf("\n bola na beta ek bar operation dekho ");                            
    }
 }
}