#define STACK_SIZE 100

typedef struct 
{
    //contents 数组名称
    int contents[STACK_SIZE];
    int top;
} Stack_ADT;


void make_empty(Stack_ADT *s);
bool is_empty(const Stack_ADT *s);
bool is_full(const Stack_ADT *s);
void push(Stack_ADT *s, int i);
int pop(Stack_ADT *s);
