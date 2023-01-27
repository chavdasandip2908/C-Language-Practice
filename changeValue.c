#include<stdio.h>


int main(){
	
	int a,b;
	printf("Enter Value of A :");
	scanf("%d",&a);
	printf("Enter Value of B :");
	scanf("%d",&b);
	
	b=a+b;
	a=b-a;
	b=b-a;
	printf("A = %d\nB = %d",a,b);
	return 0;
}



