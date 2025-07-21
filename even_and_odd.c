#include <stdio.h>

int main() {
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("you entered:%d\n",num);
	if(num % 2 == 0)
		printf("even\n");
	else
		printf("odd\n");

	printf("thank you!\n");

	return 0;
}
