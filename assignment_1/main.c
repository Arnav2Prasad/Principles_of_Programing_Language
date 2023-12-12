#include <stdio.h>

int sum(int a,int b){
	int c=a+b;
	return c;
}

int main(){
	int a,b;
	printf("Enter 2 Numbers : ");
	scanf("%d",&a);
	scanf("%d",&b);

	int c=sum(a,b);

	printf("Sum of %d and %d is : %d\n",a,b,c);

	return 0;
}
