#include <stdio.h>

void main(){
	int a, b, sum;

	printf("Please state the two numbers you would like to add.");
	scanf("%d%d",&a,&b);

	sum = a + b;

	printf("\nYour sum is %d.", sum);

	return;

}
