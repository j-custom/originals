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
  printf ("%d %d %d %d\n", atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
  printf ("%s %s %s %s\n", argv[1], argv[2], argv[3], argv[4]);
  printf ("%p %p %p %p\n", argv[1], argv[2], argv[3], argv[4]);
  printf ("%d %d %d %d\n", (int)*argv[1], (int)*argv[2], (int)*argv[3], (int)*argv[4]);

  printf ("a+b+c+d = %d\n", atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]) + atoi(argv[4]));

  return 0;
}
