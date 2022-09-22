#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter a number to find factorial");
	scanf("%d",&n);
	if(n<0)
	printf("error!please enter any positive number");
else 
{
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		}
		printf("factorial of number %d=%llu",n,fact);
		}
	return 0;	
}
