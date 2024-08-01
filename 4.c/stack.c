#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void CreateStack(stack *ps){
ps->top=0;
}
void push(int x,stack *ps){
ps->arr[ps->top++]=x;
}
int StackFull(stack *ps){
if(ps->top==MAX)
    return 1;
else
    return 0;
}
int StackEmpty(stack *ps){
if(ps->top==0)
    return 1;
else
    return 0;
}
void pop(int *px,stack *ps){
    *px=ps->arr[--ps->top];
}
void DisPlayStack(stack *ps,void (*pf) (int)){
int i;
for(i=ps->top;i>0;--i)
    (*pf)(ps->arr[i-1]);
}
