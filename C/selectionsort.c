#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[30],i,j,n,min=0,temp=05;
    printf("Enter the no. of items in list: ");
    scanf("%d",&n);
    printf("Enter the list: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Before Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    for(i=0;i<n-1;i++)
    {
        min=i; //Setting the first location of unsortrd array as the minimum
        for(j=i+1;j<n;j++) //Finding the smallest element in unsorted array
        {
            if(arr[j]<arr[min])
               min=j;
        }
        temp=arr[i]; //Swapping values to sort list
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("\nAfter Sorting the order of items in list is:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
