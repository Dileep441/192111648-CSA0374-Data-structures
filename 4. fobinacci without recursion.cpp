#include<stdio.h>
int main(){
int i, n,t1=0,t2=1,sum=0;
printf("Enter the number of elements");
scanf("%d",&n);
printf("fobinacci series :\n\n %d ",t1,t2);
for(i=2;i<=n;i++)
{
	sum=t1+t2;
	printf("%d",sum);
	t1=t2;
	t2=sum;
	}
	return 0;
}
