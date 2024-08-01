#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void CreateStack(stackk *ps){
ps->top=0;
}
int StackFull(stackk *ps){
if(ps->top==MAX)
    return 1;
else
    return 0;
}
int StackEmpty(stackk *ps){
if(ps->top==0)
    return 1;
else
    return 0;
}
void push (int x,stackk *ps){
ps->arr[ps->top++]=x;
}
int StackSize(stackk *ps){
return ps->top;
}
void StackTop(int *px,stackk *ps){
    *px=ps->arr[ps->top-1];
}
void DisPlayStack(stackk *ps,void (*pf) (int)){
int i;
for(i=ps->top;i>0;--i)
    (*pf)(ps->arr[i-1]);
}
void pop (int *px,stackk *ps){
 *px=ps->arr[--ps->top];
}

