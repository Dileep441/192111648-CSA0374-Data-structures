#include<stdio.h>
int main()
{
	int array[100],i,num;
	printf("Enter the size of array");
	scanf("%d",&num);
	printf("Enter  the elements of the array");
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
			}
			printf("even number are");
			for(i=0;i<num;i++)
			{
		if(array[i]%2==0)
		{
			printf("%d\t",array[i]);
					}
			}
			printf("odd number are");
			for(i=0;i<num;i++)
			{
				if(array[i]%2!=0)
				{
					printf("%d\t",array[i]);
									}
			}
}
