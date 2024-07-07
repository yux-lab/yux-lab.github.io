/* Computes the dimensional weight of a 12" x 10" x 8" box */ 
#include <stdio.h>

int main(void)
{
    int length = 12;
    int width = 10;
    int height = 8;

    int volume = length * width * height;

    //在C语言，两个整数相除，若有小数将会向下取整。
    //int weight = volume / 166; 
    //960 / 166 = 5.783→5

    int weight = (volume + 165) / 166;

    printf("Dimensions:%dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches):%d\n", volume);
    printf("Dimensional weight (pounds):%d\n", weight);

    return 0;
}