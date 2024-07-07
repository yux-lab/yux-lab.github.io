

```c
/* Computes pairwise averages of three numbers */
#include <stdio.h>

double average(double a, double b)
{
	return (a + b) / 2;	
}

int main(void)
{
	double x, y, z;
	
	printf("Enter three numbers: ");
	
	scanf("%lf%lf%lf", &x, &y, &z);
	printf("Average of %g and %g: %g\n", x, y, average(x, y));
	printf("Average of %g and %g: %g\n", y, z, average(y, z));
	printf("Average of %g and %g: %g\n", x, z, average(x, z));
	
	return 0;
}
```
```c

/* Prints a countdown */
#include <stdio.h>

void print_count(int n)
{
	printf("T minus %d and counting\n", n);
}

int main(void)
{
	int i;
	
	for(i = 10; i > 0; --i)
		print_count(i);
	
	return 0;
}
```

```c
#include <stdio.h>

//void表示没有实际参数；占位符
void print_pun(void)
{
	printf("To C, or not to C: that is the question.\n");
}

int main(void)
{
	//函数没有参数要带上圆扣号
	print_pun();
	return 0;
}
```

```
#include <stdbool.h>
#include <stdio.h>

//prime:只有1与该数本身两个正因数的数
bool is_prime(int n)
{
	int divisor;
	
	if(n <= 1)
		return false;
	for (divisor = 2; divisor * divisor <= n; divisor++)
		if(n % divisor == 0)
			return false;
	return true;
}

int main(void)
{
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	if(is_prime(n))
		printf("Prime\n");
	else
		printf("Not prime\n");
	
	return 0;
	
}
```






















