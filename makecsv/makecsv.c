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
  double y1[ROWS];
  double y2[ROWS];
  double y3[ROWS];

  int i;
  for (i = 0; i < ROWS; i++)
    {
      x[i] = i;
      y1[i] = rand()/(double)RAND_MAX * 10;
      y2[i] = rand()/(double)RAND_MAX * 10;
      y3[i] = rand()/(double)RAND_MAX * 10;
    }
  
  if ((fp = fopen("./samplecsv4.csv", "a")) == NULL)
    {
      printf("file open error\n");
      //      exit(0);
      return -1;
    }  

  for (i = 0; i < ROWS; i++)
    {
      printf("%d,%f,%f,%f\n", x[i], y1[i], y2[i], y3[i]);
      fprintf(fp, "%d,%f,%f,%f\n", x[i], y1[i], y2[i], y3[i]);
    }

  fclose(fp);
  return 0;
}

