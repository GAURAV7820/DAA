//Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))
#include<stdio.h>
int upperbound(int[],int,int,int);
int lowerbound(int arr[],int low,int high,int key)
{
    int lb=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
        {
            lb=mid;
            high=mid-1;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
        
    }
    return lb;
    
}
int upperbound(int arr[],int low,int high,int key)
{
    int ub=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==key)
         {
             ub=mid;
             low=mid+1;
         }
        else if(arr[mid]<key)
            low=mid+1;
        else
           high=mid-1;
       
    }
    return  ub;
    
}
int main()
{
    int arr[]={10,20,20,30,30,30,40,40,40,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    int n;
    printf("Enter how many times you want to perform this\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the key you want to search in the array\n");
        scanf("%d",&key);
        int ub=upperbound(arr,0,size-1,key);
        int lb=lowerbound(arr,0,size-1,key);
        int result=(ub-lb)+1;
        if(lb!=-1)
            printf("Element is present in the array and count is %d\n",result);
        else
            printf("Element is not present\n");
    }
    return 0;
}