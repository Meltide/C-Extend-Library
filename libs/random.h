// =================================
// random.h
// 获取范围内随机数
// by MeltIce a.k.a Meltide
// =================================

#ifndef CE_RANDOM_H
#define CE_RANDOM_H

#include <stdlib.h>
#include <time.h>

float randfloat(float min, float max)
{
    srand((unsigned int) time(NULL));
    float randNum = min + ((float) rand() / (float) RAND_MAX) * (max - min);
    return randNum;
}

double randdouble(double min, double max)
{
    srand((unsigned int) time(NULL));
    double randNum = min + ((double) rand() / RAND_MAX) * (max - min);
    return randNum;
}

int randint(int min, int max)
{
    srand((unsigned int) time(NULL));
    int randNum = (int) rand() % max + min;
    return randNum;
}

long randlong(long min, long max)
{
    srand((unsigned int) time(NULL));
    long randNum = (long) rand() % max + min;
    return randNum;
}

#endif