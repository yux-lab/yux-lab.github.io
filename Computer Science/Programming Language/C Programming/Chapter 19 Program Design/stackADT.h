#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

//Stack类型将作为指针指向stack_type结构，
//该结构存储栈的实际内容。
typedef struct stack_type *Stack;
   
Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, int i);
int pop(Stack s);

#endif