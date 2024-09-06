### 2.1.1 编译和链接
预处理(执行以`#`开头的命令(指令))→编译(将程序翻译成机器指令(目标代码))→链接(将目标代码和附加代码(比如库函数`printf`)整合)

GCC/IDE(软件包，可在其编辑、编译、链接、执行以及调试)

### 2.2.1 指令
```c
#一般形式
指令

int main(void)
{
    语句
}


#include <stdio.h> 指令 头文件
#为什么要使用头文件？因为C语言的输入/输出功能是由标准库的函数实现的

#int表明函数返回一个整数值；void表明函数没有参数
int main(void)
{
    printf("To C, or not to C:that is the question.\n");

    #使函数终止；其次指出返回值为0
    return 0;
    
}
```

## 2.3 注释
```c
/*  */

C99新注释
// 
```

## 2.4变量和赋值
### 2.4.1 类型
`int`,`float`

### 2.4.2 声明
使用变量前：先声明，后赋值
```c
int height;
float profit;

//合并声明
int height, length, width, volume;
```
### 2.4.3 赋值
```c
int height = 8;

//包含小数点的常量赋值给float变量时，后面加一个字母f
float profit = 2150.48f;
```

### 2.4.4 显示变量的值
```c
printf("Height: %d\n", height)
//占位符'%d'(仅用于int型变量),指明值要放在哪个位置显示

printf("profit: $%.2f\n", profit)
//占位符'%.2f'用于显示float型变量。默认显示小数点后6位。
//如若强制显示小数点后p位，则把'.p'放在%和f中间。
```

### 2.4.5 初始化
```c
// 数值8 是一个初始化式
int height = 8
```

## 2.5　读入输入
scanf函数
**`%f`**：格式说明符，表示期望读取一个浮点数
**`&x`**：变量 `x` 的地址
**`&`** ：取地址运算符
```c
//读入一个int型的值
scanf("%d", &i);
//%d:说明scanf读入的是一个整数；
&是取地址运算符，用于获取变量的内存地址

//读入一个float型的值
scanf("%f", &x);
```

## 2.6　定义常量的名字
```c
//宏定义（macro definition）；大写字母:约定俗成
#define:预处理指令
#define INCHES_PER_POUND 166

//当对程序进行编译时，预处理器会把每一个宏替换为其表示的值。例如，语句
weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND; 

//将变为:
weight = (volume + 166 - 1) / 166; 
```

## 2.7　标识符
命名区分大小写

不以数字开头

不以关键字命名

什么是记号？
在C语言中，记号（Token）是代码中的最小单位，它可以是关键字、标识符、运算符、常量或分隔符。

## 练习题
2.
(a)
include <stdio.h>指令，实现printf输出语句

(b)
Parkinson's Law:
Work expands so as to fill the time
available for its completion.

4.
随机

5.
a

6.为什么说在标识符中使用多个相邻的下划线（如 current___balance ）不太合适？<br>
可能会与编译器或标准库中的标识符冲突，并导致不可预测的行为。

8.
18//?


在编译C程序时，通常需要经过两个主要步骤：编译和链接。
### 编译和链接的过程
1. **预处理**：预处理器会处理源代码中的预处理指令（如 `#include`），生成一个新的文件。
2. **编译**：编译器将预处理后的源代码编译成汇编代码或目标代码（.o 文件）。
3. **汇编**：汇编器将汇编代码转换成机器码（目标文件）。
4. **链接**：链接器将多个目标文件和所需的库链接在一起，生成最终的可执行文件。

为什么 ubuntu 只需要一条命令？
`gcc -o 1 1.c`
因为在 gcc 中， `-o` 会自动进行上述的过程。



