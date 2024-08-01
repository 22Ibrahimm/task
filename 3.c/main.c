#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void DestroyFun(stackk *ps){
CreateStack(ps);
}
int main()
{
   stackk s;
   CreateStack(&s);
   push(10,&s);
   push(20,&s);
   push(30,&s);
   push(40,&s);
   DestroyFun(&s);

    return 0;
}
