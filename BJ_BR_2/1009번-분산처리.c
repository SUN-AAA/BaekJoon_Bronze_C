#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//�׽�Ʈ ���̽� ���� �Է�
	int n, i, j;
	int a[50], b[50];
	scanf("%d", &n);

	//�׽�Ʈ ���̽� ������ŭ a,b �Է� �ݺ�
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	//a[i]�� ���ڸ� ���� b[i]�� ���� -> 10���� ���� �������� 0�̸� 10��, 1�̸� 1�� ~~~ ���
	for (i = 0; i < n; i++)
	{
		int cnt = 1;

		int repeat = (b[i] == 0) ? 1 : b[i] % 4;
		if (repeat == 0) repeat = 4;

		for (j = 0; j < repeat; j++)
		{
			cnt = cnt * a[i] % 10;
		}

		if (cnt == 0)
			printf("10\n");
		else
			printf("%d\n", cnt);
	}

	return 0;
}