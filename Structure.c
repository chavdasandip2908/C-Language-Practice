#include<stdio.h>
#include<conio.h>
// Below Program is Prectice Storage Class 1.register 

struct student{
	char name[10];
	int roll_no;
	float result;	
};

void main(){

//	struct student m1;
//	m1.name="sandip";
//	m1.roll_no=2204030100189;
//	m1.result=57.42;

	printf("Enter Student Record :");
	scanf("%d %s %f",&m1.roll_no,&m1.name,&m1.result);
	
	printf("%s",m1.name);	
	printf("%d",m1.roll_no);	
	printf("%.2f",m1.result);	
	
}
