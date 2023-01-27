#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, *arr, i ,temp;
    printf("Enter Array Length :");
    scanf("%d", &num);// input 5
    arr = (int*) malloc(num * sizeof(int));
    printf("Enter Array Element :");
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);// input 1,2,3,4,5
    }


    for (i =0; i<num/2; i++) {
            temp=arr[i]; 			// 	1.temp=arr[0]=1 , 		2.temp=arr[1]=2
            arr[i]=arr[num-i-1];	//	1.arr[0]=arr[5-0-1]=5 , 2.arr[1]=arr[5-1-1]=4 
            arr[num-i-1]=temp; 		// 	1.arr[5-0-1]=1 , 		2.arr[5-1-1]=2
       }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    
    getch();
}
