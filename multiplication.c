//multiplication of two arrays
#include<stdio.h>
int main(){
int x[10],y[10],n,i,z[10];
for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&y[i]);
}
for(i=0;i<n;i++){
	z[i]=x[i]*y[i];
}
printf("the addition result is: ");
for(i=0;i<n;i++){
	printf("%d",z[i]);
}
return 0;
}
