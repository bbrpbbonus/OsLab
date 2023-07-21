#include <stdio.h>
int main(){
	int num = 1;
	int sum = 0;
	float count = 0;
	printf("if you input 0 for stop the loop\n");
	while (num > 0){
		printf("enter your number : ");
		scanf("%d",&num);
		sum += num;
		count++;
	}	
	float average = sum/(count-1);
	printf("sum = %d",sum);
	printf("\nAverage = %.2f \n",average);
	
}	
	
