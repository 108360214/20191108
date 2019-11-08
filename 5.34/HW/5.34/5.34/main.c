#include<stdio.h>
#include<stdlib.h>

int main() {

	int num1 = 0, num2 = 0, ans = 0;
	printf("請輸入數字一 : ");
	scanf_s("%d", &num1);
	printf("請輸入數字二 : ");
	scanf_s("%d", &num2);
	num2--;
	ans = num1;
	printf("power ( %d , %d ) = %d", num1, num2, num1);
	for (int i = 0; i < num2; i++) {
		ans *= num1;
		printf(" * %d", num1);
	}
	printf("\nAnser = %d\n", ans);

	system("PAUSE");
	return 0;
}