#include<stdio.h>

int main()
{
    int arr[5]={10,20,50,100,400},key,mid,low,high;
   printf("\n ARRAY-> ");
    for(int i=0;i<5;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n Enter key ->");
    scanf("%d",&key);
    low =0;
    high = 4;
    mid = (low+high)/2;
            // printf("\n\t%d",high);

    while(low<=high)
    {
         mid=(low+high)/2;
        if(key<arr[mid])
        {
            high=mid-1;
        }
        else if(key==arr[mid])
        {
            printf("\n element %d found at %d index",key,mid);
            break;
        }
        else if(key>arr[mid])
        {
            low=mid+1;
            // mid=(low+high)/2;
        }
    }
    if(low>high)
    {
        printf("\n %d not found in array",key);
        // return;
    }

  return 0;
}