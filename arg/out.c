#include <stdio.h>
#include "header.h"

int
main(int argc, char *argv[])
{
  printf("%d\n", argc);
  output(argv[0], argv[1], argv[2], argv[3]);
 return 0;
}
