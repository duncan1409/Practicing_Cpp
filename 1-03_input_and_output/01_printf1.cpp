#include <cstdio> //c에서의 <stdio.h>를 호출 한 것과 같다.

int main()
{
    printf("%d + %d = %i\n", 2, 3, 2 + 3);
    printf("%u + %u = %u\n", 2, 3, 2 + 3);

    printf("%u\n", -1); // unsigned character

    char ch = 'b';
    printf("%c%c\n", 'a', ch);

    printf("%f - %f = %lf\n", 2.0, 3.0f, -1.0f, 1.0, 1.0); // lf는 printf에서 double과 float 둘 다 사용 가능

    printf("%x + %x = %X\n", 10, 10, 20);
    printf("%x + %x, %X\n", 10, 10, 10);

    printf("%o + %x, %X\n", 10, 10, 10); // 8진수

    printf("%hhx\n", 255); // 16진수
    printf("%hhx\n\n", 256);

    printf("%010d\n", 1); //자리맞추기, '-'와 '.'을 합쳐서 개수를 센다.
    printf("%010d\n", -1);
    printf("%010f\n", 1.1);
    printf("%010f\n\n", -1.1);


    printf("%010f\n", 1.1);//소수점 한자리까지만 보여주기
    printf("%010f\n", -1.1);
    printf("%010.1f\n", 1.1);
    printf("%010.1f\n\n", -1.1);
    
    printf("%10d\n", 1); //오른쪽으로 정렬, 즉 왼쪽을 여백으로 채움
    printf("%10d\n", -1);
    printf("%10f\n", 1.1);
    printf("%10f\n\n", -1.1);

    printf("%-10d a\n", 1); //왼쪽으로 정렬, 즉 오른쪽을 여백으로 채움
    printf("%-10d a\n", -1);
    printf("%-10f a\n", 1.1);
    printf("%010f a\n\n", -1.1);
}