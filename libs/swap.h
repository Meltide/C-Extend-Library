// =================================
// swap.h
// 交换两个变量的值
// by MeltIce a.k.a Meltide
// =================================

#ifndef CE_SWAP_H
#define CE_SWAP_H

void swapdouble(double *a, double *b)
{
    double temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapfloat(float *a, float *b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapint(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swaplong(long *a, long *b)
{
    long temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapchar(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#endif