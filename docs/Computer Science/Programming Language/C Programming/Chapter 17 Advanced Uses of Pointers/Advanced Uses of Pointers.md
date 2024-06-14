# 第 17 章　指针的高级应用

## 17.1　动态存储分配
C语言支持动态存储分配，即在程序执行期间分配内存单元的能力。

为什么要有动态存储分配？比如说，数组初始化时的大小是固定的，但是在后续的增删改查中可能需要扩容数组，而C语言程序完成编译后，数组元素的数量就固定了。因此利用存储分配，可以设计出能根据需要扩大（和缩小）的数据结构。

动态分配可以把它们链接形成 表、树或其他数据结构。

### 17.1.1　内存分配函数
- malloc 函数——分配内存块，但是不对内存块进行初始化。（常用，比下者高效） 
- calloc 函数——分配内存块，并且对内存块进行清零。 
- realloc 函数——调整先前分配的内存块大小。

### 17.1.2　空指针
当调用内存分配函数时，如果找不到需要的足够大的内存块，函数会返回空指针（null pointer）——一个区别于所有有效指针的特殊值。

在把函数的返回值存储到指针变量中以后，需要判断该指针变量是否为空指针。

```c
//测试 malloc 函数的返回值
p = malloc(10000); 
if (p == NULL) { 
  /* allocation failed;  take appropriate action  */ 
} 

if ((p = malloc(10000))  == NULL) { 
  /* allocation failed;  take appropriate action  */ 
} 

//指针测试真假
//有空指针为假
if (p == NULL) ...

if (!p) ...

//非空指针都为真
if (p != NULL) ...

if (p) ...
```

## 17.2　动态分配字符串
不确定的字符串长度。直到程序运行时才动态分配

### 17.2.1　使用 malloc 函数为字符串分配内存
```c
//malloc原型
//分配size 个字节的内存块，并且返回指向该内存块的指针。
//size_t:无符号整数类型
void *malloc(size_t size);
```

```c
//给n个字符的字符串分配内存空间
p = malloc(n + 1);
```
![](images/Pasted%20image%2020240613080957.png)

```c
//调用strcpy函数初始化
strcpy(p, "abc");
```
![](images/Pasted%20image%2020240613081032.png)

### 17.2.2　在字符串函数中使用动态存储分配
```c
//指向常量字符数组（字符串）的指针;
//const:关键字，表示这些字符串内容不能被膝盖
char *concat(const char *s1, const char *s2) 
{ 
	char *result ; 
	//分配的内存地址赋值给result指针
	result = malloc(strlen(s1) + strlen(s2) + 1); 
	if (result == NULL)  { 
		printf("Error: malloc failed in concat\n"); 
	    exit (EXIT_FAILURE); 
  } 
  //复制
  strcpy(result, s1); 
  //连接
  strcat(result, s2); 
  return result; 
}
```

### 17.2.3　动态分配字符串的数组


## 17.3　动态分配数组
和动态分配字符串一样的好处


### 17.3.1　使用 malloc 函数为数组分配存储空间

```c
//定义数组
//声明指针变量
int *a;

//调用函数分配空间
//使用sizeof运算符来计算出每个元素所需要的空间数量
a = malloc(n * sizeof(int));
```

一旦a 指向动态分配的内存块，就可以忽略a 是指针的事实，可以把它用作数组的名字。
```c
for (i = 0; i < n; i++) 
  a[i] = 0; 
```

### 17.3.2　 calloc 函数

### 17.3.3　 realloc 函数

待学...

## 17.4　释放存储空间
malloc 函数和其他内存分配函数所获得的内存块都来自一个称为 堆 （heap）的存储池。过于频繁地调用这些函数（或者让这些函数申请 大内存块）可能会耗尽堆，这会导致函数返回空指针。
![](images/Pasted%20image%2020240614134740.png)
![](images/Pasted%20image%2020240614134746.png)

因为没有指针指向第一个内存块（图上阴影部分），所以再也不能使 用此内存块了。

对程序而言，不可再访问到的内存块被称为是垃圾（garbage）。留有垃圾的程序存在内存泄漏（memroy leak）现象。一些语言提供垃圾收集器 （garbage collector）用于垃圾的自动定位和回收，但是C语言不提供。相反，每个C程序负责回收各自的垃圾，方法是调用 free 函数来释放不需要的内存。

### 17.4.1　 free 函数
```c
//free函数在<stodib.h>中有下列原型
void free(void *ptr);

//使用free函数
p = malloc(...); 
q = malloc(...); 
free(p); 
p = q; 
```

### 17.4.2　“悬空指针”问题
调用free(p) 函数会释放p指向的内存块，但是不会改变p本身。

p不再指向有效内存块
```c
char *p = malloc(4); 
... 
free(p); 
... 
strcpy(p, "abc");     /*** WRONG ***/ 
```

## 17.5　链表