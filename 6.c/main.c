#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int expression(char *a, stackk *s) {
    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == '(' || a[i] == '{' || a[i] == '[') {
            push(a[i], s);
        } else if (a[i] == ')' || a[i] == '}' || a[i] == ']') {
            if (StackEmpty(s)) {
                return 0;
            }
            int popped;
            pop(&popped, s);
            if ((a[i] == ')' && popped != '(') ||
                (a[i] == '}' && popped != '{') ||
                (a[i] == ']' && popped != '[')) {
                return 0;
            }
        }
    }
    return StackEmpty(s);
}
int main()
{
    char a[]="{[(a)-(c)]}";
    stackk s;
    CreateStack(&s);
    if(expression(a,&s))
        printf("Perfect\n");
    else
        printf("NOt Perfect\n");
    return 0;
}
