## 16.1　结构变量

结构的元素:**成员**;具有不同类型(面向对象??)

## 16.1.1　结构变量的声明
```c
//仓库零件:编号、名称、现有数量
struct { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} part1, part2;
```

struct{...} 指明了类型，而part1 和part2 则是具有这种类型的变量。

结构的成员在内存中是按照声明的**顺序存储**的。

part1内存形式。假设
- part1 存储在地址为2000的内存单元中
- 每个整数在内存中占4个字节
- NAME_LEN 的值为25
- 成员之间没有间隙

![](images/Pasted%20image%2020240610070431.png)

每个结构代表一种新的**作用域**，为成员设置了独立的名字空间 (name space)，上下两个结构name成员不会冲突
```c
struct { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} part1, part2; 

struct { 
char name[NAME_LEN+1]; 
int number; char sex; 
} employee1, employee2;
```

## 16.1.2　结构变量的初始化
```c
struct { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} part1 = {528, "Disk drive", 10}, 
  part2 = {914, "Printer cable", 5};
  //如果没有初始化则用0表示初始值
```

![](images/Pasted%20image%2020240610070854.png)

## 16.1.3　指定初始化
```c
//原始;按结构成员的顺序
{528， "Disk drive", 10}

//指定
{.number = 528, .name = "Disk drive", .on_hand = 10}
```

点号和成员名称的组合称为**指示符**

优点:
- 易读易验证
- 初始化时不用按顺序

## 16.1.4　对结构的操作
访问结构内的成员
- 写出结构名字 + 点 + 成员名字
```c
printf("Part number: %d\n", part1.number); printf("Part name: %s\n", part1.name);
```

左值
> 指可以出现在赋值操作符左侧的表达式。左值表示一个内存位置，可以读取或修改该位置存储的值。简单来说，左值是指向内存位置的表达式，可以用来存储数据。


```c
Part1.number = 258; /* changes part1's part number */ 
Part1.on_hand++; /* increments part1's quantity on hand */
```

点是C语言的运算符
```c
scanf("%d", &part1.on_hand);// = &(part1.on_hand) 取地址
```

赋值运算
```c
part2 = part1;
//part1.number 复制到part2.number ，把 part1.name 复制到part2.name ...

//封装稍候将进行复制的数组
struct { int a[10]; } a1, a2; 
a1 = a2; /* legal, since a1 and a2 are structures */
```

## 16.2　结构类型
命名结构**类型**
- 可以声明“结构标记”
- 使用typedef 来定义类型名

为什么要命名结构类型？比如说，有一个结构拥有着几个声明，而另一个结构不仅需要前者的声明还需要新的声明。如果重复编写会使程序膨胀，并且将来修改会有风险，而最大的问题是，part1 和part2 不具有兼容的类型，因此part2 ≠ part1,反之亦然，且类型没有名字，所以也不能用作函数调用的参数。

```c
struct { 
int number; 
char name[NAME_LEN+1]; int on_hand; 
} part1;

struct { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} part2;
```

## 16.2.1　结构标记的声明
**结构标记**(structure tag)
```c
//声明名为part的结构标记
struct part { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
};
//分号表结束
```

一旦创建了标记part ，就可以用它来声明变量了

结构标记只有在前面放置了单词struct 才会有意义;假如程序拥有part变量，这两者并不会冲突
```c
struct part part1, part2;
```

结构**标记**的声明可以和结构**变量**的声明合并在一起
```c
struct part { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} part1, part2;

//所有声明为struct part 类型的结构彼此之间是兼容的**
struct part part1 = {528, "Disk drive", 10}; struct part part2; 

part2 = part1; /* legal; both parts have the same type */**
```

## 16.2.2　结构类型的定义
用typedef来定义真实的类型名

类型Part 的名字必须出现在定义的末尾
```c
typedef struct { 
int number; 
char name[NAME_LEN+1]; 
int on_hand; 
} Part;

//声明变量
Part part1, part2;
```

## 16.2.3　结构作为参数和返回值
函数可以有结构类型的实际参数和返回值

函数显示出结构的成员
```c
void print_part(struct part p) { 
printf("Part number: %d\n", p.number); printf("Part name: %s\n", p.name); printf("Quantity on hand: %d\n", p.on_hand); 
}

//调用
print_part(part1);
```

函数返回part 结构，此结构由函数的实际参数构成
```c
struct part build_part(int number, const char * name, int on_hand) { 
	struct part p; 
	
	p.number = number; 
	strcpy (p.name, name); 
	p.on_hand = on_hand; 
	return p; 
}

//调用
part1 = build_part(528, "Disk drive", 10);
```