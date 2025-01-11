#include<stdio.h>

int main()
{
 int arr[5]={100,20,200,50,60},i,j,min,temp;
        printf("\n array ->");
     for(i=0;i<5;i++)
     {
        printf("\t%d",arr[i]);
     }
//    for(i=0;i<4;i++)
//    {
//      min=i;
//       for(j=i+1;j<5;j++)
//       {
//          if(arr[j]<arr[min])
//          {
//             min=j;
//          }
//       }
//         temp= arr[i];
//         arr[i]=arr[min];
//         arr[min]=temp;
//    }
 for(i=0;i<4;i++)
 {
    min=i;
     for(j=i+1;j<5;j++)
     {
        if(arr[min]>arr[j])
        {
            min=j;
        }
     }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]= temp;
 }
   printf("\n sorted array ->");
     for(i=0;i<5;i++)
     {
        printf("\t%d",arr[i]);
     }
    return 0;
}