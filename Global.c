#include<stdio.h>
#include<conio.h>
// Below Program is Prectice Storage Class 1.global
// Global Variable is Use Any Where 

int a=10; // a is Global Variable

void fun(){
	
	printf(" fun Function  %d \n",a); 
	
}

void main(){
	
	fun();

	printf(" Main Function %d \n",a);
	if(1){

		printf(" If Block %d \n",a);

	}
	

}
