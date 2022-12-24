#include <stdio.h>
#include <stdlib.h>	//	exit(), srand() 
#include <time.h>

#define ROWS 1000

int
main(int argc, char*argv[])
{
  (void) srand((unsigned int)time(NULL));
    
  FILE	 *fp;
  int	 x[ROWS];
  double y[ROWS];
  int i;
  for (i = 0; i < ROWS; i++)
    {
      x[i] = i;
      y[i] = rand()/(double)RAND_MAX * 100;
    }
  
  if ((fp = fopen("./samplecsv3.csv", "a")) == NULL)
    {
      printf("file open error\n");
      //      exit(0);
      return -1;
    }  

  for (i = 0; i < ROWS; i++)
    {
      printf("%d,%f\n", x[i], y[i]);
      fprintf(fp, "%d,%f\n", x[i], y[i]);

    }

  fclose(fp);
  return 0;
}

