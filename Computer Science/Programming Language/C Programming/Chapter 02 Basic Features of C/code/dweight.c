/* Computes the dimensional weight of a 12" x 10" x 8" box */ 

// 3. 通过下列方法缩写程序dweight.c ：（1）用初始化式替换对
// 变量height 、length 和width 的赋值；（2）去掉变量weight
// ，在最后的printf 语句中计算(volume + 165)/ 166 
#include <stdio.h>

int main(void)
{
    //1.
    int length = 12, width = 10, height = 8;
    // int length = 12;
    // int width = 10;
    // int height = 8;

    int volume = length * width * height;

    //在C语言，两个整数相除，若有小数将会向下取整。
    //int weight = volume / 166; 
    //960 / 166 = 5.783→5

    //int weight = (volume + 165) / 166;

    printf("Dimensions:%dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches):%d\n", volume);
    printf("Dimensional weight (pounds):%d\n", (volume + 165) / 166);

    return 0;
}