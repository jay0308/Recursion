//selection sort 

#include <stdio.h>

//recursive method...

void selectionSort(int a[],int size,int i, int j)
{
	int temp;
	if(i==size)
	{
		for(i=0;i<6;i++)
			printf("%d ",a[i]);
		return;
	}

	else 
	{
		if(j<size)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
			selectionSort(a,size,i,j+1);		
		}
		
		else
		{
			selectionSort(a,size,i+1,i+1);
		}
	}
}

int main(int argc, char *argv[])
{
	int arr[6],i,min,j,temp;
	printf("Enter the elements of array\n");
	for(i=0;i<6;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}

	//sorting..
	selectionSort(arr,6,0,1);
	/* Itteratively
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	for(i=0;i<6;i++)
		printf("%d ",arr[i]);*/
	
	return 0;
}
