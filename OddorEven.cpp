// Richard Nick S. Del Rosario
#include <stdio.h>

// use modulus to check if odd or even
int oddeven(int num){
	int result;
	result = ((num % 2)==0);
	return(result);
	}

int main(){
	int number;
	printf("Input a number to check if its Odd or Even\n");
	scanf("%d", &number);
	int temp = oddeven(number);
	if (temp == 1){
		printf("The number %d is Even", number);
	}
	if (temp == 0){
		printf("The number %d is Odd", number);
	}
}
