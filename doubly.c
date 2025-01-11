#include<stdio.h>
#include<stdlib.h>

struct node
{
 struct node * pre;   
 int data;
 struct node * next;
}*start = NULL;


void create_list(int info)
{
    struct node * new_node,*ptr;
    new_node=malloc(sizeof(struct node));
    new_node->data=info;
    new_node->next=NULL;
    if(start==NULL)
    {
        new_node->pre=NULL;
        start=new_node;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=new_node;
        new_node->pre=ptr;
    }
    return;

}

void add_beg(int info)
{

}
void display()
{
     struct node *ptr;

    if(start==NULL)
    {
        printf("\nlist is empty !!\n");
    }
    else
    {
        ptr=start;
        printf("\nlist ");
        while(ptr!=NULL)
        {
            printf("-> %d",ptr->data);
            ptr=ptr->next;
        }
        return;
    }
}

void delet_all()
{
      struct node *ptr,*temp;
   while(start!=NULL)
   {
   ptr=start;
   free(ptr);
   start=start->next;
   }   
   if(start==NULL)
   {
    printf("\n all element deleted successfully");
   }
}
int main()
{
     int n,choice,info,pos,i;
     while(1)
     {
        printf("\n!!! doubly linked list  operation !!!\n");
        printf("\n1. create list \n2. insert at opsition\n3. insert at end \n4.insert insert at opsition\n5. delete at begennig\n6. delete at end \n7. delete at opsition \n8. display \n9. count \n10. exit\n");
        printf("\nenter your operation -> ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    printf("\nEnter the number of nodes you want in list ->");
                    scanf("%d",&n);
                    for(i=0;i<n;i++)
                    {
                        printf("\n enter the value of node ->");
                        scanf("%d",&info);
                        create_list(info);
                    }
                    break;
            case 2:
                   printf("\nEnter for insert at begnning ->");
                   scanf("%d",&info);  
                   add_beg(info);
                   break;      
            case 8:
                    display();
                    break;
            case 10:
                    delet_all();
                    exit(0);
                    break;              
            default:
                    printf("\n invalid operation \n"); 
                    break;    

        }

     }

    return 0;
}