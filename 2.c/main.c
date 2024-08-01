#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    stackk s;
    CreateStack(&s);
    int n;
    for(int i=0;i<4;i++){
        scanf("%i",&n);
     if(!StackFull(&s)){
          push(n,&s);
            }
    }
  int x=StackTop(&s);
    printf("Top element:%i\n",x);

    return 0;
}
