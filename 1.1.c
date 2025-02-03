#include<stdio.h>
int main()
{
    int arr[10],i,n,m=1,k,l,z,o;
    printf("Enter how many times you want to check the data\n");
    scanf("%d",&l);
    for(z=0;z<l;z++)
    {
        printf("Enter the limit\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter the number to search\n");
        scanf("%d",&k);
        for(i=0;i<n;i++)
        {
            if(k!=arr[i])
            {
                if(k!=arr[i])
                {
                    m++;
                }
            }
            else
            {
                printf("%d is present in the array\n",k);
                printf("After %d comparison we find the number\n",m);
                m=1;
                o=1;
                break;
            }
        }
         if(o!=1)
            {
                printf("The given no. not found\n");
            }
            o=0;
    }
        return 0;
}