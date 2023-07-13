#include <stdio.h>
#include "header.h"

int
main(int argc, char *argv[])
{
  printf("%d\n", argc);
  output((int)argv[1], (int)argv[2], (int)argv[3], (int)argv[4]);
 return 0;
}
