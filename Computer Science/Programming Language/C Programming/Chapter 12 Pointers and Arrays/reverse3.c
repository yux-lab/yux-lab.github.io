/* Reverses a series of numbers (pointer version) */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], *p;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++)
        //p指向数组元素;&p指向数组元素指针的指针
        scanf("%d", p);

    printf("In reverse order:");

    for(p = a + N - 1; p >= a; p--)
        printf(" %d", *p);
    
    printf("\n");

    return 0;
}