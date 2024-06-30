//展示不同数据类型（如整数、浮点数和指针）的字节表示形式

#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for(i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int main() {
    int val = 12345;
    float fval = 123.45;
    int *pval = &val;

    printf("Integer:\n");
    show_int(val);

    printf("Float:\n");
    show_float(fval);

    printf("Pointer:\n");
    show_pointer(pval);

    return 0;
}