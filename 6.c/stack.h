
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef struct {
int top;
int arr[MAX];
}stackk;
void CreateStack(stackk *ps);
int StackFull(stackk *ps);
int StackEmpty(stackk *ps);
void push (int x,stackk *ps);
void pop (int *px,stackk *ps);
int StackSize(stackk *ps);
void StackTop(int *px,stackk *ps);
void DisPlayStack(stackk *ps,void (*pf) (int));

#endif // STACK_H_INCLUDED
