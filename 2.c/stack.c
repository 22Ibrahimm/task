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
void push (int x,stackk *ps){
ps->arr[ps->top++]=x;
}
int StackTop(stackk *ps){
    return ps->arr[ps->top-1];
}
