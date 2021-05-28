#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int main() {

	/*
		rand()
		 stdlib.h 헤더에 포함된 함수
		 0 ~ 32767 사이의 숫자 하나를 임의로 생성하여 반환

		srand(초기값)
		 stdlib.h 헤더에 포함된 함수
		 rand() 함수의 초기값을 설정하는 함수

		time(NULL)
		 time.h 헤더에 포함된 함수
		 1970년 1월 1일 0시 부터 현재까지의 시간을 초단위로 반환
	*/

	//for (int i = 1; i <= 5; i++) {
	//	int val = rand();
	//	printf("%d회차 : %d\n", i, val);
	//}
	//puts("");
	//srand(time(NULL));		// 초기값을 time 함수로 매 초마다 변경 > 매 초마다 rand 함수 결과가 변경
	//for (int i = 1; i <= 5; i++) {
	//	//int sVal = rand() % 10;		// 10으로 나눈 나머지 : 0 ~ 9 까지 출력
	//	int sVal = rand() % 10 + 1;		// 0 ~ 9 에 1을 더해서 1 ~ 10까지 출력
	//	printf("%d회차 : %d\n", i, sVal);
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
	//	printf("로또 번호는 ");
	//	for (i = 0; i < len; i++)
	//		printf("%3d", roto[i]);
	//	puts(" 입니다");
	//}
	/*
		macro
		 프로그램에서 자주 사용하는 상수 or 간단한 수식에 이름을 정의하여
		 필요할 때 이름으로 대체해서 사용

		main 함수 바깥쪽에서 정의

		#define <정의할 이름> <정의할 내용>
	*/

#define PI 3.141592
#define CIRCLE(half) (half) * (half) * PI
#define B_E while(getchar() != '\n')
#define BASE srand(time(NULL))
#define PLUS(a) (a) + 70

int main() {

	//printf("원주율 : %.2f\n", PI);

	//double a;
	//printf("원의 반지름 입력 : ");	scanf_s("%lf", &a);
	//printf("반지름이 %.2fcm인 원의 넓이 : %.2f\n", a, CIRCLE(a));

	//char c1, c2;
	//printf("첫 번째 문자 입력 : "); c1 = getchar();
	//B_E;
	//printf("두 번째 문자 입력 : "); c2 = getchar();
	//printf("%c %c\n", c1, c2);

	//BASE;
	//for (int i = 0; i < 5; i++) {
	//	int val = rand() % 10 + 1;
	//	printf("%d회차 : %d\n", i, val);
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
			printf("80 ~ 90범위의 값은 ");
				printf("%d", n);
			puts(" 입니다");
	}
