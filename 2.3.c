//Given an array of nonnegative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.
#include<stdio.h>
#define max 100
void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   
}
void find(int arr[],int n,int k)
{
    sort(arr,n);
    int count=0,left=0,right=1;
    while(right<n)
    {
        int current =arr[right]-arr[left];
        if(current==k)
        {
            count++;
            left++;
            right++;
        }
        else if(current>k)
            left++;
        else
            right++;
    }
    if(count==0)
        printf("No pair found\n");
    else
        printf("Total Pair found:%d\n",count);
}
int main()
{
    int test,j,n,arr[max],key;
    printf("Enter the test case you required\n");
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        printf("Enter the array\n");
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("Enter the Key you want to search\n");
        scanf("%d",&key);
        find(arr,n,key);
    }
}