#include<stdio.h>
#include<string.h>
int main()
{
	char str[25],i;
		for(i=0;i<7;i++){
		printf("\nenter your choiced alphabet: ");
		scanf("%s",&str[i]);}
		printf("%s, ",strrev(str));
}
