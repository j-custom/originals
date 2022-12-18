#include <stdio.h>
#include <stdlib.h>	//	exit(), srand() 
#include <time.h>

int
main(int argc, char*argv[])
{
  (void) srand((unsigned int)time(NULL));
    
  FILE *fp;
  int x[10];
  // int y[5];
  double y[10];
  int i;
  for (i = 0; i < 10; i++)
    {
      x[i] = i;
    }
  for (i = 0; i < 10; i++)
    {
      y[i] = rand()/(double)RAND_MAX * 10;
    }
  
  if ((fp = fopen("./samplecsv.csv", "a")) == NULL)
    {
      printf("file open error\n");
      //      exit(0);
      return -1;
    }  

  for (i = 0; i < 10; i++)
    {
      printf("%d \t %f\n", x[i], y[i]);
      fprintf(fp, "%d \t %f\n", x[i], y[i]);

    }

  fclose(fp);
  return 0;
}

