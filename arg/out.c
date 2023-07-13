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
  printf ("%d %d %d %d\n", (int)*argv[1], (int)*argv[2], (int)*argv[3], (int)*argv[4]);
 return 0;
}
