#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void CopyFun(int *x,stack *ps, stack *pk) {
    stack temp;
    CreateStack(&temp);
    while (!StackEmpty(ps)) {
        pop(&x, ps);
        push(x, &temp);
    }
    while (!StackEmpty(&temp)) {
        pop(&x, &temp);
        push(x, pk);
    }
}
void DisPlay(int x){
printf("%i\n",x);
}
int main()
{
  stack s;
  stack k;
  int x,m;
  CreateStack(&s);
    CreateStack(&k);
    for(int i=0;i<5;++i){
      scanf("%i",&m);
    if(!StackFull(&s)){
    push(m,&s);
    }
    }
 CopyFun(&x,&s,&k);
 printf("Element of another stack :\n");
 DisPlayStack(&k,&DisPlay);
    return 0;
}
