#include<stdio.h>

int main()
{
     int arr[5]={10,2,4,90,1},i,j,temp;
     printf("\n array ->");
     for(i=0;i<5;i++)
     {
        printf("\t%d",arr[i]);
     }
     for(i=0;i<4;i++)
     {
        for(j=i+1;j<5;j++)
        {
            if(arr[j]<arr[i])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
     }
     printf("\n sorted array ->");
     for(i=0;i<4;i++)
     {
        printf("\t%d",arr[i]);
     }

    return 0 ; 
}