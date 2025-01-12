#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int cq[MAX];
int front=-1,rear=-1;
void enque(int info){

      if(front==-1 && rear==-1)
        {
                front=rear=0;
                cq[rear]=info;
        }
        if((rear+1)%MAX==front)
        {
                printf("\n QUEUE OVERFLOW\n");
        }
      else  
        {
                rear=(rear+1)%MAX;
                cq[rear]=info;
        }

}
void deque()
{
    int val;
        if(front==-1 && rear ==-1)
        {
                printf("\nqueue under flow ");
        }
        else if(front==rear)
        {
                val=cq[front];
                front=rear=-1;
                printf("\n %d element deleted from queue",val);
        }
        else
        {
                val=cq[front];
                front=(front+1)%MAX;
                printf("\n %d element deleted from queue",val);
        }
}

void peek()
{
    if(front==-1 && rear ==-1)
    {
        printf("\n QUEUE UNDER FLOW  ");
    }
    else
    {
        printf("%d",cq[front]);
    }
}
void display()
{
        int i;
        if(front==-1 && rear ==-1)
        {
                printf("\n QUEUE UNDER FLOW  ");
        }
 else
 {

        i=front;
        printf("\n queue ->");
        while(i!=rear)
        {
               i=(i+1)%MAX; 
               printf(" %d -> ",cq[i]);
        }
        // printf("%d",cq[rear]);
  }
}

void counter()
{
        int i,count=0;
        i=front;
        while(i!=rear)
        {
                i=(i+1)%MAX;
                count++;
        }
        printf("\n the number of elements are -> %d",count);
}
int main ()
{
    int choice,n,i,info;
 while(1)
 {
    printf("\nCIRCULAR QUEUE");
    printf("\n1. enqueue\n2. dequeue\n3. display\n4. peek\n5. counter \n6. exit\n");
    printf("\n ente ryour choice here -> ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("\n how many element you want to enter in queue ->");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    printf("\n Enter value for queue -> ");
                    scanf("%d",&info);
                    enque(info);
                }
                break;
        case 2:
                deque();
                break;
        case 3: 
                display();
                break;
        case 4:
                peek();
                break;
        case 5:
               counter();
               break;
        case 6:
                exit(0);
                break;
        default:
                 printf("\ngoli beta masti nhi chalo operations to dekho beta");                                                 
    }
 }
}