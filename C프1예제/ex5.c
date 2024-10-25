#include<stdio.h>

//재귀함수 이용
int solve(int num)
{
	if (num == 1)
		return 2;
	else
		return 2 * solve(num - 1);
}

int main(void)
{
	int num;
	printf("정수: ");
	scanf_s("%d", &num);
	printf("2의 %d승은 %d\n", num, solve(num));
	return 0;
}

//재귀함수 미이용
//int solve(int a)
//{
//	int i;
//	int result = 1;
//
//	for (i = 0; i <= a; i++)
//		result *= 2;
//	return result;
//}
