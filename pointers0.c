/*
 * author: Moody
*/
#include <stdio.h>

// shoot nuclear bombs
void greet()
{
  printf("Hello world!\r\n");
}

int main(int argc, char **argv)
{
  // declare a function pointer variable
  void (*function_pointer)();

  // point to our function (thats why its called function pointer, right?)
  function_pointer = greet;

  // method 1
  function_pointer();

  // method 2
  (*function_pointer)();

  return 0;
}
