/* Sums a series of numbers */
# include<stdio.h>

int main(void)
{
    int n;
    int i = 1;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while(i <= n){
        //printf(格式串, 表达式1, 表达式2, ...);
        //%10d 占10个字符
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;

}