#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * next;
}*front =NULL,*rear=NULL;

struct node *new_node,*ptr;

void enqueue(int info)
{
  new_node=malloc(sizeof(struct node));
  new_node->data=info;
  new_node->next=NULL;
if(front==NULL)
{
    front=rear=new_node;
}   
else
{
    rear->next=new_node;
    rear=new_node;
}
}

void deque()
{
    if(front==NULL)
    {
        printf("\nqueue is empty");
    }
    else
    {
        ptr=front;
        front=front->next;
        printf("\n%d deleted from queue",ptr->data);
        free(ptr);
    }
}

void display()
{
    if(front==NULL)
    {
        printf("\nqueue is empty\n ");
    }
    else
    {
        ptr=front;
        printf("\n queue --> ");
        while(ptr != NULL) 
        {
            printf("%d --> ",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}

void del_all()
{
    ptr=front;
    while(front!=NULL)
    {
        ptr=front;
        front=front->next;
        free(ptr);
    }
    printf("\n all deleted \n");
}

int main()
{
    int choice,n,value;

 while(1)
{

    printf("\n QUEUE WITH LINKED LIST");
    printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    printf("Enter your choice: ");
scanf("%d",&choice);
    switch(choice)
   {
        case 1: 
                printf("Enter the value to be insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
        case 2:
                deque();
                break;
        case 3:
                display();
                break;
        case 4:
                del_all();
                exit(0);
                break;
        default:
                printf("\n goli bhai dekho kya kya likha hai ");
                break;

   }

}    
        return 0;
}

// jai shree ram unit 2 completed succefully on 05/11/24;