#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i;
    scanf("%d",&i);
    int a[i],j,sum=0;
    for (j=0; j<i; j++) {
        scanf("%d",&a[j]);
    }
     for (j=0; j<i; j++) {
       sum+=a[j];
    }  
    printf("%d",sum);
    getch();
    return 0;
}

