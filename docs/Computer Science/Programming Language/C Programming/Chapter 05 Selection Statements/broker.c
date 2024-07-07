#include <stdio.h>

int main(void)
{
    float commission, value;

    printf("Enter value of trade: ");
    scanf("%f", &value);

    if(value < 2500.00f){
        commission = 30.00f + (value * .17f);
    //else if (value >= 2500.00f && value < 6250.00f) 是多余的。如果不大于等于2500就不会进到下一个循环
    }else if(value < 6250.00f){
        commission = 56.00f + (value * .0066f);
    }else if(value < 20000.00f){
        commission = 76.00f + (value * .0034f);
    }else if(value < 50000.00f){
        commission = 100.00f + (value * .0022f);
    }else if(value < 500000.00f){
        commission = 155.00f + (value * .0011f);
    }else 
        commission = 255.00f + (value * .0009f);

    if(commission < 39.00f)
        commission = 39.00f;
    
    printf("Commission : $%.2f\n", commission);

    return 0;
    
}