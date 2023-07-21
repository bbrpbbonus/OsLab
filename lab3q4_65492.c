#include <stdio.h>
int main(){
	int a = 1;
	int sum = 0;
	float count = 0;
	while (a > 0){
		printf("enter a number : ");
		scanf("%d",&a);
		sum += a;
		count++;
	}	
	float average = sum/count;
	printf("sum = %d",sum);
	printf("\nAverage = %f",average);
	
}	
	
