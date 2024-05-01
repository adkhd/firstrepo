#include <stdio.h>
#include <string.h>

int main()
{
/*
    int one, two, three;
    printf("숫자를 입력하세요:");
    scanf("%d %d %d", &one, &two, &three);
    printf("\n 입략한 숫자: %d %d %d", one, two, three);
    char c[10]="abcd";
    printf("%s", c);
    */
float a, b, c;
char name, fname;
scanf(" %f %f %f", &a, &b, &c);
printf("\n %f*%f*%f : %f", a, b, c, a*b*c);
return 0;
}
