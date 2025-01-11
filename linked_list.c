#include<stdio.h>
#include<stdlib.h>


struct node
{
 int data;
 struct node* next;
}*start = NULL;

void create_list(int info)
{
    struct node * ptr,*new_node;
    new_node = malloc(sizeof(struct node));
    new_node->data = info;
    new_node-> next = NULL;
    if(start==NULL)
    {
        start= new_node;
    }
    else
    {
        ptr=start;
        while(ptr->next!= NULL)
        {
            ptr = ptr->next;
        }
        ptr->next= new_node;
    }

}

void add_beg(int info)
{
    struct node * new_node;
    new_node = malloc(sizeof(struct node));
    new_node->data=info;
    new_node->next=start;
    start=new_node;
    return ;

}
void display()
{
    struct node * ptr;
    if(start ==NULL)
    {
        printf("\n the list is empty !!!");
        return ;
    }
    ptr = start;
    printf("\n list ->");
    while(ptr!=NULL)
    {
        printf("%d -> ",ptr->data);
        ptr =ptr->next;
    }
    printf("NULL");
    return;
   // printf("%d",ptr->next->data);

}
void add_end(int info)
{
    struct node * new_node,*ptr;
    new_node = malloc(sizeof(struct node));
    new_node->data=info;
    new_node->next= NULL;
    if(start==NULL)
    {
        printf("\nlist is empty");
    }
    else
    {
         ptr=start;
         while(ptr->next!=NULL)
         {
            ptr=ptr->next;
         }
          ptr->next=new_node;
    }
    return;
}

void add_pos(int pos, int info)
{
    struct node * new_node,*ptr;
    int i;
    new_node = malloc(sizeof( struct node));
    new_node->data=info;
    if(pos==0)
    {
        new_node->next=start;
        start=new_node;
             printf("\nADDED  AT POSITION\n");

        return;
    }
    else
    {
    ptr=start;
     for(i;i<pos;i++)
     {
        ptr=ptr->next;
        if(ptr==NULL)
        {
            printf("\n there are less than %d notes in list !!",pos);
            return;
        }
     }
     new_node->next = ptr->next;
     ptr->next = new_node;
     printf("\nADDED  AT POSITION\n");
     return;
    }
}
void delet_all()
{
    struct node * temp;
    while (start!= NULL)
    {
        temp = start;
        start = temp->next;
        free(temp);
    }
        printf("\n element deleted!!");
    return;
}
int main()
{
 int info,n,i,choice,posi;
 while(1)
{
 printf("\n 1. create list !! \n 2. insert at begining\n 3. insert at end \n 4. display\n 5. insert at opsition \n 6. exit\n enter your opration -> ");
 scanf("%d",&choice);
 switch (choice)
 {
    case 1 :
            printf("\nhow many elements you want in your linked list ->");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                printf("Enter the values for notes -> ");
                scanf("%d",&info);
                create_list(info);
            }
            break;
    case 2:    
           printf("\nEnter the value for insert at begninig  -> ");
                scanf("%d",&info);
                add_beg(info); 
                break;   
    case 3:
            printf("\nEnter the value for insert at end  -> ");
                scanf("%d",&info);
                add_end(info);     
             break;          
    case 4:
            display();
            break;
    case 5:
            printf("\nenter the opsition for inserting -> "); 
            scanf("%d",&posi);      
            printf("\n Enter the value for inserting at position -> ");
            scanf("%d",&info); 
            add_pos(posi,info);
            break;
    case 6:
           delet_all();
           printf("\n->deleting all the notes which were created in this program \n");
           exit(0);
            break;
    default :
               printf("\ninvalid input!!!!!!");
        

 }

}
 return 0;
}