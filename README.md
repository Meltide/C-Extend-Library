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
```c
randint(起始, 结束);  //生成整型随机数
randlong(起始, 结束);  //生成长整型随机数
randfloat(起始, 结束);  //生成实型随机数
randdouble(起始, 结束);  //生成双精度随机数
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