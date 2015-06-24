/*
 * author: Moody
*/
#include <stdio.h>

/* regular functions that return int */
int add(int a, int b){ return a+b; }
int sub(int a, int b){ return a-b; }
int mul(int a, int b){ return a*b; }

/*
 *  look at the template from the normal functions that return int with
 *  the passed function_pointer
 *  IE: int add(int , int)
 *  WITH
 *    int (*function_pointer)(int, int)
 *
 *  so we are telling the function what kind of function we are passing along its paramaters
*/
int do_math(int (*function_pointer)(int,int), // <= function pointer (google it!) 
		    int a, int b)                     // <= the arguments that we use and calculate
{
  // we just execute the function that we pass and save its result
  int result = function_pointer(a,b);
  return result;
}

int main(int argc, char **argv)
{
  // execute it normally ;)
  printf("add = %d\r\n", do_math(add, 10,10)); 
  printf("subtract = %d\r\n", do_math(sub, 40,10)); 
  printf("multiplie = %d\r\n", do_math(mul, 10,10)); 
  return 0;
}
