// #include<stdio.h>
// #include<conio.h>

void main(){
	int a = 0 , b = 1 , n , i ,tem;
	printf("Enter Any Integer : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		if (i==0)
			printf("%d ",a);
		
		printf("%d ",b);
		tem=a;
		a=b;
		b=tem+b;
		
	}
	getch();
}
