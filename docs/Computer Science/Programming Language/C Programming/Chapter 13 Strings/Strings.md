## 13.1 字符串字面量
字符串常量:字符串字面量
字符串变量:变量变量,可以改变
```c
"This is a string literal"
```

### 13.1.3 如何存储字符串字面量
C把字符串字面量作为字符数组来处理,为它分配长度为n + 1的内存空间

标志字符串末尾：空字符('\0'),ASCII码值为0
![[C Programming/Chapter 13 Strings/images/1.png]]

```c
//传递"abc"的地址???
printf("abc");
```

### 13.1.4 字符串字面量的操作
```c
char *p;
//p指向字符串第一个字符
p = "abc";

char ch; 
//取下标;ch = b;
ch = "abc"[1];
```

## 13.2 字符串变量
> 只要保证字符串是以空字符结尾(C语言规定)的，任何一维的字符数组都可以用来存储字符串。
```c
#define STR_LEN 80

char str[STR_LEN+1];
```

## 13.3 字符串的读和写
### 13.2.1 初始化字符串变量
```c
char date1[8] = "June 14";

//数组初始化的缩写形式
char date1[8] = {'J', 'u', 'n', 'e', ' ', '1', '4', '\0'};

//自动分配8个字符空间,编译后固定长度
char date4[] = "June 14";
```
![[C Programming/Chapter 13 Strings/images/2.png]]

### 13.3.1 用 printf 函数和 puts 函数写字符串
```c
char str[] = "Are we having fun yet?"; 

printf("%s\n", str);

//输出：Are we having fun yet?

//显示字符串一部分: %.ps,p:显示字符数量
printf("%.6s\n", str);
//Are we
```

### 13.3.2 用 scanf 函数和 gets 函数读字符串
> 在scanf 函数调用中,不需要在str 前添加运算符&,因为str 是数组名,编译器在把它传递给函数时会把它当作指针来处理。
```c
//转换说明%s
scanf("%s", str)
```

### 13.3.3 逐个字符读字符串
自己编写输入函数
```c
int read_line(char str[], int n) 
{
	int ch, i = 0;
	 
	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch; 
			
	str[i] = '\0'; /* terminates string */ 
	return i; /* number of characters stored */
```

## 13.4 访问字符串中的字符
```c
//利用s自身来跟踪字符串中的位置
int count_spaces(const char *s)
{
	int count = 0; 
	for (; *s != '\0'; s++) 
	if (*s == ' ') 
		count++; 
	return count; 
}
```

## 13.5 使用C语言的字符串库
> C语言中把字符串当作数组来处理,因此对字符串的限制方式和对数组的一样,特别是,它们都不能用C语言的运算符进行复制和比较操作。
```c
char str1[10], str2[10];

//复制
//str1/str2 为数组名
str1 = "abc"; /*** WRONG ***/ 
str2 = str1; /*** WRONG ***/

//在声明中，= 不是赋值运算符。
char str1[10] = "abc";

//作为指针进行比较而非内容;地址不同->0
if (str1 == str2) ... /*** WRONG ***/

//使用函数库
#include <string.h>
```

### 13.5.1 strcpy 函数
函数把字符串s2 复制给字符串s1
> !无法检查str2 指向的字符串的大小是否真的适合str1 指向的数组。
```c
//copy s2 to s1
char *strcpy(char *s1, const char *s2);

strcpy(str2, "abcd"); /* str2 now contains "abcd" */
```

```c
//strncpy函数;第三个参数用于限制所复制的字符数
strncpy(str1, str2, sizeof(str1));

//确保str1 总是以空字符结束
strncpy(str1, str2, sizeof(str1) - 1); str1[sizeof(str1)-1] = '\0';
```

### 13.5.2 strlen 函数
```c
strlen(求字符串长度)原型:
size_t strlen (const char *s);//???

//strlen 函数返回字符串s的长度:s中第一个空字符之前的字符个数(不包括空字符)
int len; 
len = strlen("abc"); /* len is now 3 */ 
len = strlen(""); /* len is now 0 */ 
strcpy(strl, "abc"); 

//用数组作为实际参数时,strlen不会测量数组本身的长度,而是返回存储在数组中的字符串的长度。
len = strlen(strl); /* len is now 3 */
```

### 13.5.3 strcat 函数
将s2内容追加到s1的末尾,并返回s1(指向结果字符串的指针)
```c
//原型:
char *strcat(char *s1, const char *s2);

strcpy(str1, "abc"); 
strcat(str1, "def"); /* str1 now contains "abcdef" */ 

//??为什么str1的值没改变?上下一起运行打印会显示什么?
strcpy(str1, "abc"); 
strcpy(str2, "def"); 
strcat(str1, str2); /* str1 now contains "abcdef" */
```

strncat 函数,第三个参数来限制所复制的字符数
```c
strncat(str1, str2, sizeof(str1) - strlen(str1) - 1) ;
```

### 13.5.4 strcmp 函数
利用字典顺序进行字符串比较。
比较s1 s2,根据s1 是 >、=、< s2,
函数返回一个>、=、< 0的值
```c
//原型
int strcmp(const char *s1, const char *s2);

if (strcmp(str1, str2) < 0) /* is str1 < str2? */

if (strcmp(str1, str2) <= 0) /* is str1 <= str2? */
```

### 13.6.1 搜索字符串的结尾
```c
//定位空字符位置的方式来计算字符串的长度，用空字符的地址减去字符串中第一个字符的地址。
size_t strlen(const char *s)
{
	const char *p = s;

	while(*s)
		s++;
	return s - p;
}

//
const char *str = "Hello, world!"; 
size_t length = strlen(str); 
printf("Length of string: %zu\n", length);
//输出:Length of string: 13
```

### 13.6.1 搜索字符串的结尾
```c
char *strcat(char *s1, const char *s2)
{
	char *p = s1;

	while(*p)
		//指向s1末尾
		p++;
		//s2指向的字符复制到p指向的地方;自增
	while(*p++ = *s2++)
		//遇到空字符终止
		;
	return s1;
}
```

## 13.7 字符串数组
```c
char planets[][8] = {"Mercury", "Venus", "Earth", 
					"Mars", "Jupiter", "Saturn", 
					"Uranus", "Neptune", "Pluto"};
```

![[C Programming/Chapter 13 Strings/images/3.png]]

指向字符串的指针的数组;
数组存储的是指针,指针指向对应的字符串
```c
char *planets[] = {"Mercury", "Venus", "Earth", 
					"Mars", "Jupiter", "Saturn", 
					"Uranus", "Neptune", "Pluto"};


//搜寻以字母M 开头的字符串
for (i = 0; i < 9; i++) 
	if (planets[i][0] == 'M') 
		printf("%s begins with M\n", planets[i]);
```

![[C Programming/Chapter 13 Strings/images/4.png]]

