#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int main() {

	/*
		rand()
		 stdlib.h ����� ���Ե� �Լ�
		 0 ~ 32767 ������ ���� �ϳ��� ���Ƿ� �����Ͽ� ��ȯ

		srand(�ʱⰪ)
		 stdlib.h ����� ���Ե� �Լ�
		 rand() �Լ��� �ʱⰪ�� �����ϴ� �Լ�

		time(NULL)
		 time.h ����� ���Ե� �Լ�
		 1970�� 1�� 1�� 0�� ���� ��������� �ð��� �ʴ����� ��ȯ
	*/

	//for (int i = 1; i <= 5; i++) {
	//	int val = rand();
	//	printf("%dȸ�� : %d\n", i, val);
	//}
	//puts("");
	//srand(time(NULL));		// �ʱⰪ�� time �Լ��� �� �ʸ��� ���� > �� �ʸ��� rand �Լ� ����� ����
	//for (int i = 1; i <= 5; i++) {
	//	//int sVal = rand() % 10;		// 10���� ���� ������ : 0 ~ 9 ���� ���
	//	int sVal = rand() % 10 + 1;		// 0 ~ 9 �� 1�� ���ؼ� 1 ~ 10���� ���
	//	printf("%dȸ�� : %d\n", i, sVal);
	//}

	//int roto[6] = { 0 };
	//int len = sizeof(roto) / sizeof(int);
	//int i = 0, n = 0;

	//srand(time(NULL));
	//while (1) {
	//	int val = rand() % 45 + 1;

	//	for (i = 0; i < n; i++) {
	//		if (val == roto[i])
	//			break;
	//	}
	//	if (i == n) {
	//		roto[i] = val;
	//		n++;
	//	}
	//	if (n >= 6) {
	//		break;
	//	}
	//}
	//	printf("�ζ� ��ȣ�� ");
	//	for (i = 0; i < len; i++)
	//		printf("%3d", roto[i]);
	//	puts(" �Դϴ�");
	//}
	/*
		macro
		 ���α׷����� ���� ����ϴ� ��� or ������ ���Ŀ� �̸��� �����Ͽ�
		 �ʿ��� �� �̸����� ��ü�ؼ� ���

		main �Լ� �ٱ��ʿ��� ����

		#define <������ �̸�> <������ ����>
	*/

#define PI 3.141592
#define CIRCLE(half) (half) * (half) * PI
#define B_E while(getchar() != '\n')
#define BASE srand(time(NULL))
#define PLUS(a) (a) + 70

int main() {

	//printf("������ : %.2f\n", PI);

	//double a;
	//printf("���� ������ �Է� : ");	scanf_s("%lf", &a);
	//printf("�������� %.2fcm�� ���� ���� : %.2f\n", a, CIRCLE(a));

	//char c1, c2;
	//printf("ù ��° ���� �Է� : "); c1 = getchar();
	//B_E;
	//printf("�� ��° ���� �Է� : "); c2 = getchar();
	//printf("%c %c\n", c1, c2);

	//BASE;
	//for (int i = 0; i < 5; i++) {
	//	int val = rand() % 10 + 1;
	//	printf("%dȸ�� : %d\n", i, val);
	//}

	int ar[10];
	int len = sizeof(ar) / sizeof(int);
	int i = 0, n = 0, cnt = 0;

	BASE;
	while (1) {
			int val = rand() % 100 + PLUS(i);

			for (i = 0; i < n; i++) {
				if (val == ar[i])
					break;
			}
			if (i == 80 && 81 && 82 && 83 && 84 && 85 && 86 && 87 && 88 && 89 && 90) {
				n++;
			}
			if (n >= 10) {
				break;
			}
		}
			printf("80 ~ 90������ ���� ");
				printf("%d", n);
			puts(" �Դϴ�");
	}
