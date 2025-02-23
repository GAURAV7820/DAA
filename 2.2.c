#include<stdio.h>
#define max 100
void findindex(int arr[],int size)
{
    int c=0;
    for(int k=size-1;k>=2;k--)
    {
        int i=0,j=k-1;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(sum==arr[k])
            {  printf("i,j,k are \n %d %d %d",i,j,k);
               c++;
               break;
            }
            else if(sum<arr[k])
                i++;
            else
                j--;
        }
    }
    if(c==0)
        printf("No Sequence found\n");
}
int main()
{
    int arr[max];
    int n,size;
    printf("Enter how many times you want to perform this task\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the size of the array\n");
        scanf("%d",&size);
        printf("Enter the array \n");
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[j]);
        }
        findindex(arr,size);
    }
    return 0;

}