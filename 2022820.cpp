#include<stdio.h>

int main()
{
	int count=0;
	int i=0;
	int j=0;
	int arr[1000]={0};
	scanf("%d",&count);
	
	for(i=0;i<count;i++)
	{
		scanf("%d",&arr[i]);
	}

	//比较
	for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			int temp=0;
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
		}
		}

	}

	//去重
	for(i=0;i<count-1;i++)
	{	
		int k=0;
		if(arr[i] == arr[i+1])
		{
			for(k=i;k<count-1;k++)
			{
				arr[k]=arr[k+1];
			}
			i--;
			count--;
	}
	}

	for(i=0;i<count;i++)
	{
	printf("%d ",arr[i]);
	}

	return 0;
}