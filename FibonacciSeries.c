 #include<stdio.h>
 #include<conio.h>

void fibonacciSeries(int num){
	int a = 0 , b = 1 , i ,tem;
	for (i=0;i<num;i++){
		if (i==0)
			printf("%d ",a);
		
		printf("%d ",b);
		tem=a;
		a=b;
		b=tem+b;
		
	}
}

void main(){
	int  n;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	
	fibonacciSeries(n);
	
	getch();
}
