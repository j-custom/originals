#include <stdio.h>
//#include <stdlib.h>	//	exit()

int
main(int argc, char*argv[])
{
  
  FILE *fp;
  int x[10];
  // int y[5];
  int y[10];
  int i;
  for (i = 0; i < 10; i++)
    {
      x[i] = i;
    }
  for (i = 0; i < 10; i++)
    {
      y[i] = i * 5;
    }
  
  if ((fp = fopen("./samplecsv.csv", "a")) == NULL)
    {
      printf("file open error\n");
      //      exit(0);
      return -1;
    }  

  for (i = 0; i < 10; i++)
    {
      printf("%d \t %d\n", x[i], y[i]);
      fprintf(fp, "%d \t %d\n", x[i], y[i]);

    }
  return 0;
}

