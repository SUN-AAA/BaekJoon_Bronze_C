/* 
N : ��ϴ� �ð�(��)
m : �ʱ� �ƹ�
T : 1�� ��ϸ� �ƹ��� T��ŭ ����
M : �ִ� �ƹ�(M���� �۰ų� ���� ������ � ����)
R : 1�� �޽��ϸ� �ƹ��� R��ŭ ����

1 <= N, T, R <= 200
50 <= m <= M <= 200

N, m, M, T, R�� �־����� ��
N�� ��ϴµ� �ʿ��� �ð��� �ּڰ���?
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N, m, M, T, R, cnt = 0, rate, exer = 0;

	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	rate = m;

	if (m + T > M) {
		printf("%d", -1);
	}
	else {
		while (1) {
			if (rate + T <= M) {
				exer++;
				rate += T;
			}
			else {
				rate -= R;
				if (rate <= m) {
					rate = m;
				}
			}
			cnt++;

			if (exer == N) {
				printf("%d", cnt);
				break;
			}
			else if (exer > N) {
				printf("%d", -1);
				break;
			}
		}
	}

	return 0;
}
