#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef struct {
int top;
int arr[MAX];
}stack;
void DisPlayStack(stack *ps,void (*pf) (int));
void push(int x,stack *ps);
int StackEmpty(stack *ps);
int StackFull(stack *ps);
void pop(int *px,stack *ps);
void DisPlayStack(stack *ps,void (*pf) (int));


#endif // STACK_H_INCLUDED
