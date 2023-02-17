//////////////////////////////////////////////////////////////////
//	extract_comments.c					//
//								//
//	引数で与えたソースファイルから/* */で囲まれた箇所を	//
//	抜き出してくれるプログラム				//
//								//
//	started 2023/01/05					//
//	1.0     2023/02/17					//
//////////////////////////////////////////////////////////////////

/* include files */
#include <stdio.h>
#include <stdlib.h>	/* for fopen(), exit() */
#include <string.h>

/* macros */
#define MAXLEN 1024

/* prototype decl. */

// returns 0 if '/''*' is else returns non-zero.
int find_begin(char *s)
{
  int i = 0;
  while(s[i] != '\0')
    {
      if((s[i] == '/') && (s[i + 1] == '*'))
	{
	  return 0;
	}
      i++;
    }
  return 1;
}

// returns 0 if '*''/' is else returns non-zero.
int find_end(char *s)
{
  int i = 0;
  while(s[i] != '\0')
    {
      if((s[i] == '*') && (s[i + 1] == '/'))
	{
	  return 0;
	}
      i++;
    }
  return 1;
}

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
  
  while((fgets(string, sizeof(string), fp)) != NULL)
    {
      if((find_begin(string) == 0) && (find_end(string) == 0))
	{
	  printf("%s", string);
	} else {;}
    }
  
  //
  //      if ((c = strchr(string, '/')) != NULL)
  //	{
  //	  printf("got /! It's address is %p. \n", c);
  
  /* 後処理 */
  fclose(fp);
  return 0;
}
