#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node * next;
}*start=NULL;

void create_list(int info)
{
   struct node *new_node,*ptr;
   new_node = malloc(sizeof(struct node));
   new_node->data=info;
   new_node->next = NULL;
   if(start==NULL)
   {
    start=new_node;
    return;
   }
   else
   {
     ptr=start;
     while(ptr->next !=NULL)
     {
        ptr=ptr->next;
     }
     ptr->next=new_node;
   }
return ;
}


void display()
{
    struct node * ptr;
    if(start ==NULL)
    {
        printf("\n list is Empty !!!");
    }
   else
   {
    ptr=start;
    printf("\nlist is ");
    while(ptr->next != NULL)
     {
        printf("->%d",ptr->data);
        ptr=ptr->next;
     }
   } 
   return;
}
void beg_add(int info);
int main()
{
    int info,n,posi,choice;
    while(1)
    {
        printf("**MENU**\n");
        printf("\n 1. create list \n2. add at begening \n3.insert at end \n4.delete at begening \n5. insert at opsition \n6.delete at end \n7.delete at opsition \n8. insert after node\n9. delete after node\n10. exit\n11. !!display!!\n");
        printf("\nEnter your opration -> ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                    printf("\nenter the number of nodes you want in list ->  ");
                    scanf("%d",&n);
                    for(int i=0;i<n;i++)
                    {
                        printf("\n Enter the value of node -> ");
                        scanf("%d",&info);
                        create_list(info);
                    }
                    break;

            case 11:
                    display();
                    break;        
        }
    }


    return 0;
}
