#include <stdio.h>
extern char s[];        // 변수 s를 외부 변수로 선언
void extern_ex()
{
    printf("외부변수 s값은 %s 입니다. \n", s);  // 외부변수 s값을 출력
}