#include<stdio.h>
int find_factorial(int);
int main()
{
int n,fact;
printf("Enter a positive number");
scanf("%d",&n);
fact=find_factorial(n);
printf("factorial of %d=%d",n,fact );
return 0;
}
int find_factorial(int n)
{
	if (n==0)
return(1);
return(n*find_factorial(n-1));
}



