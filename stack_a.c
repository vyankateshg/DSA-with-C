#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top =-1;
void push()
{
    int data;
    if(top==MAX-1)
    {
        printf("\nstack over flow");
    }
    else
    {
        printf("\nEnter for stack value ->");
        scanf("%d",&data);
        top++;
        stack[top]=data;
    }
    return;

}

void pop()
{
    if(top==-1)
    {
        printf("\n stack under flow");
    }
    else
    {
        printf("\ndeleting -> %d",stack[top]);
        top--;
    }
    return;
}

void peek()
{
    printf("\nthe top most element is -> %d",stack[top]);
}

void display()
{
    int i;
     if(top==-1)
    {
        printf("\n stack under flow");
    }
    else
    {
        printf("\nstack -> ");
        for( i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }

    }
    return;
}

void isempty()
{
    if(top==-1)
    {
        printf("\n stack is empty !!");
    }
    else
    {
        printf("\n stack is not empty !!");
    }
    return;
}

void count()
{
 if(top==-1)
    {
        printf("\n stack is empty !!");
    }
   else
   {
    printf("\n no. is %d ",top+1);
   } 
}

void main(){
int choice,e;

while(1){
printf("\n ********* MENU *********");
printf("\n 1.Push the Element");
printf("\n 2.Pop the Element");
printf("\n 3.Peek");
printf("\n 4.Is Empty");
printf("\n 5.Display");
printf("\n 6.Exit");
printf("\n 7. counter ");
printf("\n enter choice here -> ");
scanf("%d",&choice);
switch(choice)
{
case 1:
          push();
           break;
case 2:
         pop();
         break;
case 3:
        peek();
        break;
case 4:
        isempty();
        break;
case 5:
        display();
        break;
case 7:
        count();
        break;       
case 6:
        exit(0);
        break;
default:
        printf("\n Wrong choice");
        break;
}
}
}