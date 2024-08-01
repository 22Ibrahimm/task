#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef struct {
int top;
int arr[MAX];
}stack;

void CreateStack(stack *ps);
void push(int x,stack *ps);
int StackFull(stack *ps);
int StackEmpty(stack *ps);
void pop(int *px,stack *ps);
int StackSize(stack *ps);

#endif // STACK_H_INCLUDED
