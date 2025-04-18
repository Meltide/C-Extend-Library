// =================================
// encrypt.h
// 凯撒密码加解密
// by MeltIce a.k.a Meltide
// =================================

#ifndef CE_ENCRYPT_H
#define CE_ENCRYPT_H

#include <string.h>

void encrypt(char pwd[], int mov)
{
    int i;
    for (i = 0; i < strlen(pwd); i++)
    {
        if (pwd[i] >= 'Z' && pwd[i] <= 'Z' - mov)
            pwd[i] += (mov - 26);
        else
            pwd[i] += mov;
    }
}

void decrypt(char pwd[], int mov)
{
    int i;
    for (i = 0; i < strlen(pwd); i++)
    {
        if (pwd[i] >= 'Z' && pwd[i] <= 'Z' - mov)
            pwd[i] -= (mov - 26);
        else
            pwd[i] -= mov;
    }
}

#endif