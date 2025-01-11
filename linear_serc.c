#include<stdio.h>
 int main ()
 {
    int arr[5]={10,20,30,40,50},key,i;
    for(i=0;i<5;i++)
    {
    printf("\n value for index %d -> %d",i,arr[i]);
    }
    printf("\nEnter the key ->  ");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if(arr[i]==key)
        {
            printf("\nelement found at index %d ",i);
            break;
       }
    }
    if(i==5)
    {
        printf("\n %d element not found at array !",key);
    }
    return 0;
 }