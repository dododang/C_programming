#include<stdio.h>

//����Լ� �̿�
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
	printf("����: ");
	scanf_s("%d", &num);
	printf("2�� %d���� %d\n", num, solve(num));
	return 0;
}

//����Լ� ���̿�
//int solve(int a)
//{
//	int i;
//	int result = 1;
//
//	for (i = 0; i <= a; i++)
//		result *= 2;
//	return result;
//}
