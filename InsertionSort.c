//insertion sort...
#include <stdio.h>

//recursive method...
void insertionSort(int arr[],int size,int i,int j,int k)
{
	int temp;
	if(i==size-1)
	{
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
		return;
	}
	else
	{
		if(j>0&&k>=0)
		{
			
			if(arr[j]<arr[k])
			{
				temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
			insertionSort(arr,size,i,j-1,k-1);
		}
		else
		{
			i++;
			insertionSort(arr,size,i,i+1,i);
		}
	}
}

int main(int argc, char *argv[])
{
	int arr[5],i,j,temp,k;
	printf("Enter the elements of array\n");
	for(i=0;i<5;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	/*//sorting...Itteratively

	for(i=0;i<6;i++)
	{
		for(j=i+1,k=i;j>0;j--,k--)
		{
			if(arr[j]<arr[k])
			{
				temp=arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}*/
	insertionSort(arr,5,0,1,0);
	return 0;
}
