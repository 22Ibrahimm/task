#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef struct {
int top;
int arr[MAX];
}stackk;
void CreateStack(stackk *ps);
int StackFull(stackk *ps);
void push (int x,stackk *ps);
int StackTop(stackk *ps);



#endif // STACK_H_INCLUDED
