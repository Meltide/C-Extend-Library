// =================================
// random.h
// 获取范围内随机数
// by MeltIce a.k.a Meltide
// =================================

#ifndef CE_RANDOM_H
#define CE_RANDOM_H

#include <stdlib.h>
#include <time.h>

// 生成随机数
float randfloat(float min, float max)
{
    srand((unsigned int)time(NULL));
    return min + ((float)rand() / (float)RAND_MAX) * (max - min);
}

double randdouble(double min, double max)
{
    srand((unsigned int)time(NULL));
    return min + ((double)rand() / RAND_MAX) * (max - min);
}

int randint(int min, int max)
{
    srand((unsigned int)time(NULL));
    return (int)rand() % max + min;
}

long randlong(long min, long max)
{
    srand((unsigned int)time(NULL));
    return (long)rand() % max + min;
}

// 随机挑选
void randchoice_str(char *in[], int len, char *out)
{
    while (*out++ = *in[randint(0, len - 1)]++)
        ;
}

float randchoice_float(float in[], int len)
{
    return in[randint(0, len - 1)];
}

double randchoice_double(double in[], int len)
{
    return in[randint(0, len - 1)];
}

int randchoice_int(int in[], int len)
{
    return in[randint(0, len - 1)];
}

long randchoice_long(long in[], int len)
{
    return in[randint(0, len - 1)];
}

#endif