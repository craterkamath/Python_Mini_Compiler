#include "stack.h"
 
void initStack(STACK* stack, int size)
{
    stack->width = size;
    stack->size = 0;
    stack->data = (int*)calloc(size,sizeof(int));
}
 
int pop(STACK* stack)
{
   if (stack->size > 0)
   {
       stack->size--;
       return stack->data[stack->size];
   }
}
 
void push(STACK* stack, int val)
{
    if (stack->size >= stack->width / 2)
    {
        stack->width = stack->width * 2;
        stack->data = realloc(stack->data, stack->width);
    }
 
    stack->data[stack->size] = val;
    stack->size++;
}
 
int peek(STACK* stack)
{
    if (stack->size == 0) return -1;
    else
    {
        int val = stack->data[stack->size - 1];
        return val;
    }
}
 
void printStack(STACK* stack)
{
    int i;
    for (i = 0; i < stack->size; i++)
    {
        printf("%d: %d\n", i, stack->data[i]);
    }
}

int isemptyy(STACK* stack){
return stack->size==0;
}

/*int main()
{
  STACK indent;
  initStack(&indent,1);
  push(&indent,1);
  push(&indent,2);
  printStack(&indent);
  return 0;

}*/

