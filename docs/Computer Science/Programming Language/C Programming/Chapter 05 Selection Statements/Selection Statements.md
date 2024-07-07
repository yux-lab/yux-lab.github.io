### 5.2.5 条件表达式
条件运算符(conditional expression)由符号 '?' ':'组成。
又称三元运算符
[条件表达式] 表达式1 ? 表达式2 : 表达式3
如果1，则2；否则3
```c
int i, j, k;

i = 1;
j = 2;
k = i > j ? i : j; //k = 2 
k = (i >= 0 ? i : 0) + j; // k = 3
```

### 5.2.7 C99中的布尔值
```c
_Bool flag;

#include <stdbool.h>
bool flag; //ditto
flag = false;//0
flag = true;//1
```

## 5.3 switch 语句
```c
switch (grade) {
    case 4: printf("Excellent");
            break;
    case 3: printf("Good");
            break;
    case 2: printf("Average");
            break;
    case 1: printf("Poor");
            break;
    case 0: printf("Failing");
            break;
    default:printf("Illegal grade");
            break;
}
```

[switch 语句]
```c
switch (表达式) { 
    #常量表达式:不能包含变量和函数调用
    case 常量表达式 : 语句 
    ... 
    case 常量表达式 : 语句 
    default : 语句 
} 
```

***break 语句的作用***
我的理解是，假如值符合并进入到对应的case，执行完里面的语句则跳出这个switch分支。执行return或者直接跳出函数。
