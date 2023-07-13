#include <stdio.h>
#include <stdlib.h>
/*#include "header.h"
 */

int
main(int argc, char *argv[])
{
  if(argc != 5){
    exit(1);
  }
  printf("%d\n", argc);
  printf("%s\n", argv[0]);
  printf ("%d %d %d %d %d\n", argnv[1], argv[2], argv[3], argv[4]);
 return 0;
}
