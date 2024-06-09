### 8.1.2 数组初始化
默认赋值为0

### 8.1.3 指定初始化式
```c
#括号中的数字称为指示符
int a[15] = {[2] = 29, [9] = 7, [14] = 48};
```

```c
/* Checks numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while(n > 0){
		digit = n % 10;
		if(digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}
	
	if(n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	
	return 0;
}
```

### 8.1.4 对数组使用sizeof 运算符
> 运算符sizeof 可以确定数组的大小（字节数）。如果数组a 有10个整数，那么sizeof(a) 通常为40（假定每个整数占4个字节）。
>
>用sizeof 来计算数组元素(如a[0])的大小。用数组的大
小除以数组元素的大小可以得到数组的长度
```c
sizeof(a) / sizeof(a[0])
```




























