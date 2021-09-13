#include<stdio.h>
int main(){
	int x[25];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter the elements");
		scanf("%d",&x[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d, ",x[i]);
	}
}
