#include<stdio.h>
#include<stdlib.h>

int main() {

	int num1 = 0, num2 = 0, i = 0, ans1 = 0, ans2 = 0;
	
	printf("Enter the Number 1 : ");
	scanf_s("%d", &num1);
	//printf("Enter the Number 2 : ");
	//scanf_s("%d", &num2);

	for (i = 0; i <= num1 + num2; i++) {
		//ans1 = num1%i;
		//ans2 = num2%i;
		if (num1%i == 0) {
			printf("%d和%d的最小公倍數為 : %d", num1, num2, i);
		}
	}
	



	system("PAUSE");
	return 0;
}