//bubbble sort

#include <stdio.h>

//recursive method
void bubbleSort(int arr[],int size,int i, int j)
{
	int temp;
	if(i==size)
	{
		for(i=0;i<6;i++)
		printf("%d ",arr[i]);
		return;
	}
	else
	{
		if(j<size-1)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}	
			bubbleSort(arr,size,i,j+1);
		}
		else
		{
			bubbleSort(arr,size,i+1,0);
		}

	}
}
int main(int argc, char *argv[])
{
	int arr[6],i,j,temp;
	printf("Enter the elements of array\n");
	for(i=0;i<6;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}

/*	//bubble sorting,,,,ITeratively

	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(i=0;i<6;i++)
	printf("%d ",arr[i]);*/

	bubbleSort(arr,6,0,0);		//calling recursive method
	return 0;
}
