#include<stdio.h>
int main()
{
	int left=0,right,n,size,a[10],key,count=1,z=0,i,j;
	printf("Enter how many times yow ant to enter array\n");
	scanf ("%d",&size);
	for(j=0;j<size;j++)
	{
		printf("Enter the array limit\n");
		scanf("%d",&n);
		printf("Enter the array values\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter key you want to search in the array\n");
		scanf("%d",&key);
		for( i=0;i<n;i++)
		{
			if(key!=a[i])
			{
				count++;
			}
			else if(key==a[i])
			{
				z++;
				printf("Element is present in the array at index %d\n",count);
				break;
			}
		}
		if(z==0)
		printf("Element not found in the array\n");
		z=0;
		count=0;
	}
	return 0;
}
