<div align="center">

# C Extend Library

![GitHub repo size](https://img.shields.io/github/repo-size/Meltide/C-Extend-Library)
![GitHub Repo stars](https://img.shields.io/github/stars/Meltide/C-Extend-Library?style=flat)
![GitHub branch status](https://img.shields.io/github/checks-status/Meltide/C-Extend-Library/main)
![GitHub commit activity](https://img.shields.io/github/commit-activity/t/Meltide/C-Extend-Library)
![GitHub last commit](https://img.shields.io/github/last-commit/Meltide/C-Extend-Library)
![GitHub Created At](https://img.shields.io/github/created-at/Meltide/C-Extend-Library) 

简易的扩展C语言功能的库

</div>

## 内容
### `random.h`
- 作用: 生成范围内随机数
- 用法:
1. 生成随机数
```c
randint(起始, 结束);  //生成整型随机数
randlong(起始, 结束);  //生成长整型随机数
randfloat(起始, 结束);  //生成单精度随机数
randdouble(起始, 结束);  //生成双精度随机数
```
2. 数组中随机挑选
```c
randchoice_str(指针数组名, 数组长度, 输出到字符串);  //随机挑选字符串
randchoice_float(数组名, 数组长度);  //随机挑选单精度
randchoice_double(数组名, 数组长度);  //随机挑选双精度
randchoice_int(数组名, 数组长度);  //随机挑选整型
randchoice_long(数组名, 数组长度);  //随机挑选长整型
```

### `swap.h`
- 作用: 交换两个变量的值
- 用法:
```c
swapint(变量a地址, 变量b地址);  //交换整型变量
swaplong(变量a地址, 变量b地址);  //交换长整型变量
swapfloat(变量a地址, 变量b地址);  //交换实型变量
swapdouble(变量a地址, 变量b地址);  //交换双精度变量
swapchar(变量a地址, 变量b地址);  //交换字符变量
```

### `encrypt.h`
- 作用: 凯撒密码加解密
- 用法:
```c
encrypt(字符串名, 偏移量);  //加密
decrypt(字符串名, 偏移量);  //解密
```

### `include.h`
- 作用: 一键包含所有扩展库
- 用法:
```c
#include "路径/include.h"
```