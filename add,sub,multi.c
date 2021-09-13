#include<stdio.h>
void main(){
	int x[10],y[10],n,i,z[10],p;
	do
	{
		printf("press 1 for addition\n");
		printf("press 2 for subtraction\n");
		printf("press 3 for multiplication\n");
		printf("press 4 for exit\n");
		printf("now enter your choice: ");
		scanf("%d",&p);
		switch(p)
		{
			case 1:
				
				for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&y[i]);
}
for(i=0;i<n;i++){
	z[i]=x[i]+y[i];
}
printf("the addition result is: ");
for(i=0;i<n;i++){
	printf("%d",z[i]);
}
break;
			case 2:
				
		for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&x[i]);
}
for(i=0;i<n;i++){
	printf("enter numbers\n");
	scanf("%d",&y[i]);
}
for(i=0;i<n;i++){
	z[i]=x[i]-y[i];
}
printf("the subtracted result is: ");
for(i=0;i<n;i++){
	printf("%d",z[i]);
}
break;
			case 3:
				
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
printf("the multiplied result is: ");
for(i=0;i<n;i++){
	printf("%d",z[i]);
}
				break;
			default:
				printf("invalid choice:");
		}
	}
	while(i=0);
}
