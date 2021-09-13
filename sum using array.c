#include<stdio.h>
int main()
{
	int x[25],sum,s,i;
	printf("\nenter array size");
	scanf("%d",&s);
	printf("\nenter array elements");
	for(i=0;i<s;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<s;i++)
	{
		sum=sum+x[i];
	}
	printf("sum is: %d\n ",sum);
	
}
