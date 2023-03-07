//////////////////////////////////////////////////////////////////
//	reverse.c						//
//								//
//	引数で与えたソースファイルの文字列を反転			//
//								//
//	started 2023/03/08					//
//	0.5     2023/03/08 todo -> fix kaigyou appears in output//
//	1.0     2023						//
//////////////////////////////////////////////////////////////////

/* include files */
#include <stdio.h>
#include <stdlib.h>	/* for fopen(), exit() */
#include <string.h>

/* macros */
#define MAXLEN 1024

void reverse(char *s, int i)
{
  while(i+1){
    putchar(s[i]);
    i--;
  }
}

int
main(int argc, char *argv[])
{
  /* 定数宣言など */
  
  FILE *fp;
  char string[MAXLEN];
  //  char *c;
  //  int i;
  
  /* エラー処理 */
  
  if(argc != 2)
    {
      printf("usage : ./extract_comments [target file]\n");
      exit(1);
    }
  
  fp = fopen(argv[1], "r");
  if(fp == NULL)
    {
      printf("file open error.\n");
      exit(1);
    }
  /* この下に実際の処理を書く */
  // fgets terminates '\n''\0'
 
  while((fgets(string, sizeof(string), fp)) != NULL)
    {
      int k = 0;
      while(string[k] != '\0')
	{
	  k++;
	}
      reverse(string, k);
    }
  fclose(fp);
  return 0;
}
