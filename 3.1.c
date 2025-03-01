//Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.
#include<stdio.h>
#define max 100
void insertionsort(int arr[],int n)
{
    int comp=0,shift=0;
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key)
        {
            comp++;
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        if(j>=0)
            comp++;
        arr[j+1]=key;
        shift++;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nComparison:%d\n",comp);
    printf("Shift:%d\n",shift);
}
int main()
{
    int test,arr[max],n,i;
    printf("Enter the number of test case you want to perform\n");
    scanf("%d",&test);
    while(test--)
    {
        printf("Enter the size\n");
        scanf("%d",&n);
        printf("Enter the array\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        insertionsort(arr,n);
    }
    return 0;
}