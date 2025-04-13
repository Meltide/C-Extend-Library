#include <stdio.h>
#include "libs/random.h"
#include "libs/swap.h"
#include "libs/getline.h"

int main()
{
    printf("===[随机数 (random.h)]===\n");
    printf("randfloat: %f\n", randfloat(0.0000001, 1));
    printf("randdouble: %lf\n", randdouble(0, 100));
    printf("randint: %d\n", randint(0, 100));
    printf("randlong: %ld\n", randlong(1145141919810, 1919810114514));

    printf("\n===[交换两个变量的值 (swap.h)]===\n");
    int a = 2, b = 4;
    printf("交换前: a=%d, b=%d\n", a, b);
    swapint(&a, &b);
    printf("交换后: a=%d, b=%d\n", a, b);

    return 0;
}