//binary search by recursion...

#include <stdio.h>

//recursive method...

void binarySearch(int arr[],int a,int b,int s_e)
{
	int mid;
	mid=(a+b)/2;
	if((a-b)>0)
	{
		printf("Not found");
	}
	else
	{
		if(arr[mid]==s_e)
		{
			printf("found");
			return;
		}
		
		else if(s_e>arr[mid])
		{
			a=mid+1;
		}

		else
		{
			b=mid-1;
		}
		
		binarySearch(arr,a,b,s_e);
	}
}

int main(int argc, char *argv[])
{
	int arr[10],i,j,temp,mid,s_ele,a=0,b=9;
	printf("Enter the elemnts of an array: \n");
	for(i=0;i<10;i++)
	{
		printf("Enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}

	// Sorting array...

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}

	//binary search...Iteratively
	
	printf("\nEnter search element: ");
	scanf("%d",&s_ele);
/*	while(a<=b)
	{
		mid=(a+b)/2;
		if(arr[mid]==s_ele)
		{
			printf("Element found");
			return 0;
		}

		else if(s_ele>arr[mid])
		{
			a=mid+1;
		}

		else
		{
			b=mid-1;
		}
	}
	printf("Element not found!!");
*/
	// by using recursion

	binarySearch(arr,a,b,s_ele);
	return 0;
}
