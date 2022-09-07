/*
	Modify struct-1.c so that it prints out the address of origin variable.
	What do you learn from the printed out addresses?
*/

#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(int argc, char *argv[]){ 
  struct point origin;
  origin.x = 0;
  origin.y = 0;

  printf("The coordinates of the origin are: %d %d\n", origin.x, origin.y);
  printf("The address of coordinates of the origin are: %p %p\n", &origin.x, &origin.y);
  return 0;
}

