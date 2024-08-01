#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
   stack s;
   CreateStack(&s);
   push(10,&s);
   push(30,&s);
   push(40,&s);
   push(50,&s);
   int x=StackSize(&s);
   printf("size of a stack:%i\n",x);

    return 0;
}
