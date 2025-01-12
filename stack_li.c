#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*top=NULL;

   struct node * ptr,*new_node;

void push(int info)
{
    new_node= malloc(sizeof(struct node));
        new_node->data=info;    
        new_node->next=top;
        top=new_node;
    printf("\n inserted succesfully\n");
}
void pop()
{
    // struct node * ptr;
    int val;
    if(top==NULL)
    {
        printf("\n stack is empty ");
    }
    else
    {
        ptr=top;
       val=top->data;
       top=ptr->next;
       free(ptr);
       printf("\n %d poped from tack ",val);
    }
    return;
}

void display()
{
    // struct node * ptr;
    if(top==NULL)
    {
        printf("\n stack is empty ");
    }
    else
    {
    ptr=top;
    printf("\n stack ");
    while(ptr!=NULL)
    {
        printf("-> %d",ptr->data);
        ptr=ptr->next;
    }

    }
    return;
}

void peek()
{
    // struct node *ptr;
    if(top==NULL)
    {
        printf("\n stack is empty ");
    }
    else
    {
        printf("\n the top most element is %d ",top->data);
    }
    return;
}

void isempty()
{
    // struct node *ptr;
    if(top==NULL)
    {
        printf("\n stack is empty ");
    }
    else
     printf("\n stack is not empty ");
    return;
}

void count()
{
    // struct node *ptr;
    int con=1;
 if(top==NULL)
    {
        printf("\n stack is empty ");
    }
  else
  {
    ptr=top;
    while(ptr->next!=NULL)
    {
        con++;
        ptr=ptr->next;
    }
    printf("\n the no. of node in node is %d ",con);
  }     
}

void del_all()
{
    // struct node * ptr;
    while(top!=NULL)
    {
        ptr=top;
        top=top->next;
        free(ptr);
    }
        printf("\n all deleted ");
    return;
}


int main ()
{
    int choice,n,i,info;
    while(1)
    {

    printf("\n stack with linked list all operation  \n");
    printf("\n1. push\n2. pop\n3. isempty\n4. display\n5. count\n6. exit");
    printf("\n enter your operation here -> ");
    scanf("%d",&choice);
         switch(choice)
        {
            case 1:
                    printf("\n many many no. of nodes you want in stack ");
                    scanf("%d",&n);
        
                    for(i=0;i<n;i++)
                    {
                        printf("\n enter value for stack ->");
                        scanf("%d",&info);
                        push(info);
                    }
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    isempty();
                    break;
            case 4:
                    display();
                    break;
            case 5:
                    count();
                    break;
            case 6:
                    del_all();
                    exit(0);
                    break;   
            default:
                    printf("\n goli beta mast nhi ");                                          
        }
    }
}