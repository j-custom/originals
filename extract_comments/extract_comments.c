//////////////////////////////////////////////////////////////////
//	extract_comments.c					//
//								//
//	引数で与えたソースファイルから/* */で囲まれた箇所を	//
//	抜き出してくれるプログラム				//
//								//
//	started 2023/01/05					//
//////////////////////////////////////////////////////////////////

/* include files */
#include <stdio.h>
#include <stdlib.h>	/* for fopen(), exit() */
#include <string.h>

/* macros */
#define MAXLEN 1024

/* prototype decl. */


int
main(int argc, char *argv[])
{
  /* 定数宣言など */

  FILE *fp;
  //  int ch = '\0';
  //  int flag1 = 0;
  //  int flag2 = 0;

  char string[MAXLEN];
  //  char *c;
  int i;
  
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

  
  while((fgets(string, sizeof(string), fp)) != NULL)
    {
      i = 0;
      while(string[i] != '\0')
	{
	  if(string[i] == ' ')
	    {
	      break;
	    } else {
	    
	    if(string[i] != '/')
	      {
		break;
	      } else {
	      
	      printf("%c", string[i]);
	    }
	  }
	  i++;
	}
      printf("\n");
    }

  
  
  /*
    if ((c = strchr(string, '/')) != NULL)
    {
    printf("got /!\n");
    }
  */
  
  
  /* 後処理 */
  printf("\n");
  printf("\n");
  printf("\n");
  
  
  fclose(fp);
  return 0;
}
