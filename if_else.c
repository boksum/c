#include <stdio.h>
#pragma warining(disable:4996)
void main() {
    int a;
    printf("정수입력(1~200) : ");
    scanf("%d, &a");    // 정수를 입력 받아 변수 a에 저장
    if(a < 100)        // 변수 a의 값이 100보다 작으면 아래 printf문을 실행
        printf("입력한 정수(%d)가 100보다 작음. \n", a);
    else                // 변수 a의 값이 100보다 크면 아래 printf문 실행
        printf("입력한 정수(%d)가 100보다 큼. \n", a);
    printf("프로그램 종료 \n");
}