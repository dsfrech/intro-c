#include <stdio.h>

struct point {
  int x;
  int y;
};

struct line {
  struct point start;
  struct point end;
};

int main(int argc, char *argv[]){ 
  struct point origin;
  struct line l;
  
  origin.x = 0;
  origin.y = 0;

  printf("The coordinates of the lines are: %d %d %d %d\n", 
          l.start.x, l.start.y, l.end.x, l.end.y);
  printf("The address of coordinates of the lines are: %p %p %p %p\n", 
          &l.start.x, &l.start.y, &l.end.x, &l.end.y);
  return 0;
}
