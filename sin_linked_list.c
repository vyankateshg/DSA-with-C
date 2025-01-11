#include<stdio.h>
#include<stdlib.h>

struct node 
{
 int data;
 struct node *next;
}*start=NULL;

void create_list (int info)
{
    struct node * new_node,*ptr;
    new_node = malloc(sizeof(struct node));
    new_node->data=info;
    new_node->next=NULL;
    if(start==NULL)
    {
        start =new_node;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
           ptr= ptr->next;
        }
        ptr->next=new_node;
    }
}
void display()
{
    struct node * ptr;
    if(start==NULL)
    {
        printf("\nThe list is empty!!");
        return;
    }
    else
    {
        ptr=start;
        printf("\nThe list is -> ");
        while(ptr!=NULL)
        {
            printf("%d->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");
    }
    return;
}
void add_end(int info)
{
    struct node * ptr,*new_node;
    new_node = malloc(sizeof(struct node));
    new_node->data=info;
    new_node->next=NULL;
    if(start == NULL)
    {
        printf("\nlist is empty !\n so we insert at begning");
        start=new_node;
        return;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next = new_node;
    
    }
}
void count()
{
    struct node* ptr;
    int count=1;
    if(start==NULL)
    {
        printf("\n the list is empty!!");
        return;
    }
    else
    {
        ptr=start;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
      printf("\n The list contains %d node in it ",count);  
    }
}

void del_pos(int pos)
{
    struct node * ptr ,*temp;
    // if(start == NULL)
    // {
    //     printf("\nthe list is Empty!!");
    //     return;
    // }
    if(pos==0)
    {
        ptr=start;
        start=start->next;
        free(ptr);
        printf("\n first element deleted!");
        return;
    }
   else
    {
        ptr=start;
        for(int j=0;ptr!=NULL && j<pos;j++)
        {
            ptr=ptr->next;
        }
        if(ptr==NULL||ptr->next==NULL)
        {
            printf("\nthe position is more then the length of list");
            return;
        }
        temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
        return;
    }
}
void delet_all()
{
    struct node*ptr;
    while(start!=NULL)
    {
        ptr=start;
        start=ptr->next;
        free(ptr);
    }
    printf("\n all delete");
    return;
}

int main ()
{
    int choice,n,info,i,pos;
    while(1)
    {
        printf("\n1. create list \n2. display\n3. add at end \n4. count \n5.delete at opsition \n6. Exit\n");
        printf("\nEnter your operation -> ");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
                 printf("\n how many element you want in list ->");
                 scanf("%d",&n);
                 for(i=0;i<n;i++)
                 {
                    printf("\n Enter the values for linked list->");
                    scanf("%d",&info);
                    create_list(info);
                 }
            
                 break;
          case 2:
                   display();
                //    delet_all();
                   break; 
          case 3:
                 printf("\nEnter the value for insert at end ->");
                 scanf("%d",&info);
                 add_end(info);
                 break;
          case 4:
                 count();
                 break;  
          case 5:
                 printf("\n Enter the position of node you want to delete - >");
                 scanf("%d",&pos); 
                 del_pos(pos);    
                 break;       
          case 6:
                delet_all();
                exit(0);
                break;       
                               
        }
    }
}